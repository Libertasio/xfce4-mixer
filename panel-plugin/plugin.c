#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>

#include <libxfce4util/libxfce4util.h>  
#include <libxfcegui4/libxfcegui4.h>  

#include <libxfce4panel/xfce-panel-plugin.h>

#include "xfce-mixer-slider-tiny.h"
#include "xfce-mixer-prefbox.h"
#include "xfce-mixer-preferences.h"
#include "xfce-mixer-control-vc.h"
#include "xfce-mixer-cache-vc.h"
#include "vcs.h"

/* DO: timeout -> update volume */
#define UPDATE_TIMEOUT 1000

#define PLUGIN_NAME "xfce4-mixer-plugin"

/* Panel Plugin Interface */

static void mixer_construct (XfcePanelPlugin *plugin);

XFCE_PANEL_PLUGIN_REGISTER_EXTERNAL(mixer_construct);


/* internal functions */

typedef struct
{
	GtkWidget *box;
	XfceMixerControl *slider;
	XfceMixerPreferences *prefs;
	XfceIconbutton *ib;
	XfceMixerPrefbox *pb;
	gboolean broken;
	guint timer;
} t_mixer;

static void
mixer_orientation_changed (XfcePanelPlugin *plugin, GtkOrientation orientation, 
                     GtkWidget *label)
{
    if ((gtk_major_version == 2 && gtk_minor_version >= 6) || 
         gtk_major_version > 2)
    {
        gdouble angle = (orientation == GTK_ORIENTATION_HORIZONTAL) ? 0 : 90;

        g_object_set (G_OBJECT (label), "angle", angle, NULL);
    }
}

static void 
mixer_free_data (XfcePanelPlugin *plugin)
{
    DBG ("Free data: %s", PLUGIN_NAME);
    gtk_main_quit ();
}

static void 
mixer_save (XfcePanelPlugin *plugin)
{
    XfceRc *rc;
    
    DBG ("Save: %s", PLUGIN_NAME);

    rc = xfce_panel_plugin_get_rc_file (plugin, FALSE);

    if (rc)
    {
        xfce_rc_write_entry (rc, "string", "stringvalue");
        xfce_rc_write_bool_entry (rc, "bool", TRUE);
        xfce_rc_write_int_entry (rc, "int", 12);

        xfce_rc_close (rc);
    }
    else
        g_critical (_("Could not save configuration"));
}

static void
response_cb(GtkDialog* dialog, gint arg1, gpointer user_data)
{
    t_mixer *mixer = (t_mixer *) user_data;
    xfce_mixer_prefbox_save_preferences (mixer->pb, mixer->prefs);
}

static void
mixer_configure (XfcePanelPlugin *plugin)
{
    t_mixer* mixer;
    GtkWidget* w;
    XfceMixerPrefbox* pb;
    GtkDialog* dialog;
    
    mixer = NULL;
    
    DBG ("Configure: %s", PLUGIN_NAME);
    
    g_object_get (G_OBJECT (plugin), "t_mixer", &mixer, NULL);

    /* TODO TRANSLATE TITLE OR SOMETHING */

    dialog = GTK_DIALOG (
             gtk_dialog_new_with_buttons (xfce_panel_plugin_get_name (plugin), 
                                          GTK_WINDOW(gtk_widget_get_toplevel(GTK_WIDGET(plugin))), 
                                          GTK_DIALOG_DESTROY_WITH_PARENT,
                                          GTK_STOCK_CLOSE, GTK_RESPONSE_CLOSE, 
                                          NULL));

    w = xfce_mixer_prefbox_new ();	
    gtk_widget_show (w);
    gtk_container_add (GTK_CONTAINER (dialog), w);

    pb = XFCE_MIXER_PREFBOX (w);
    mixer->pb = pb;
    xfce_mixer_prefbox_fill_defaults (pb);
	
    xfce_mixer_prefbox_fill_preferences (pb, mixer->prefs);
    
    g_signal_connect (G_OBJECT (dialog), "response", G_CALLBACK (response_cb), mixer);
    
    gtk_widget_show (GTK_WIDGET (dialog));
}

static void 
mixer_set_size (XfcePanelPlugin *plugin, int size)
{
    DBG ("Set size to %d: %s", size, PLUGIN_NAME);

    if (xfce_panel_plugin_get_orientation (plugin) == 
        GTK_ORIENTATION_HORIZONTAL)
    {
        gtk_widget_set_size_request (GTK_WIDGET (plugin), -1, size);
    }
    else
    {
        gtk_widget_set_size_request (GTK_WIDGET (plugin), size, -1);
    }
}

/* create widgets and connect to signals */ 



static void 
mixer_construct (XfcePanelPlugin *plugin)
{
    GtkWidget *button;
    XfceRc *rc;
    t_mixer *mixer;

    xfce_textdomain (GETTEXT_PACKAGE, LOCALEDIR, "UTF-8"); 

    DBG ("Construct: %s", PLUGIN_NAME);
    
    DBG ("Properties: size = %d, panel_position = %d", 
         xfce_panel_plugin_get_size (plugin),
         xfce_panel_plugin_get_screen_position (plugin));

    rc = xfce_panel_plugin_get_rc_file (plugin, TRUE);

    if (rc)
        xfce_rc_close (rc);

    mixer = mixer_new ();
    g_object_set (G_OBJECT (plugin), "t_mixer", &mixer, NULL);

    gtk_widget_show (mixer->box);
    
    if ((gtk_major_version == 2 && gtk_minor_version >= 6) || 
         gtk_major_version > 2)
    {
        GtkOrientation orientation = 
            xfce_panel_plugin_get_orientation (plugin);
        gdouble angle = (orientation == GTK_ORIENTATION_HORIZONTAL) ? 0 : 90;

        g_object_set (G_OBJECT (GTK_BIN (button)->child), 
                      "angle", angle, NULL);
    }
    
    gtk_container_add (GTK_CONTAINER (plugin), GTK_WIDGET(mixer->box));

    xfce_panel_plugin_add_action_widget (plugin, mixer->box);

    g_signal_connect (plugin, "orientation-changed", 
                      G_CALLBACK (mixer_orientation_changed), 
                      GTK_BIN (button)->child);

    g_signal_connect (plugin, "free-data", 
                      G_CALLBACK (mixer_free_data), NULL);

    g_signal_connect (plugin, "save", 
                      G_CALLBACK (mixer_save), NULL);

    g_signal_connect (plugin, "size-changed", 
                      G_CALLBACK (mixer_set_size), GTK_BIN (button)->child);

    xfce_panel_plugin_menu_show_configure (plugin);
    g_signal_connect (plugin, "configure-plugin", 
                      G_CALLBACK (mixer_configure), NULL);
}

#if 0
GtkTooltips *tooltips = NULL;

static void
swap_pixbuf_ptrs (GdkPixbuf **a, GdkPixbuf **b)
{
	GdkPixbuf *tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
                                
static GdkPixbuf *
get_pixbuf_for(gboolean broken)
{
	GdkPixbuf	*pb;
	GdkPixbuf	*pb2;
	
	pb = get_pixbuf_by_id(SOUND_ICON);
	if (broken) {
		pb2 = gdk_pixbuf_copy(pb);
		gdk_pixbuf_saturate_and_pixelate(pb, pb2, 0, TRUE);

		/*saturation, pixelate)*/
		swap_pixbuf_ptrs(&pb, &pb2);

		g_object_unref(pb2);
	}
	return pb;
}

static void
xfce_mixer_launch_cb (GtkWidget *w, gpointer user_data)
{
	t_mixer *mixer;
	gchar *tmp;
	gboolean internal;
	
	mixer = (t_mixer *) user_data;
	if (!mixer || !mixer->prefs)
		return;
		
	internal = mixer->prefs->execu && 
	  g_str_has_prefix(mixer->prefs->execu, "xfce4-mixer");
	  
	if (mixer && mixer->prefs && mixer->prefs->device && internal) {
		tmp = g_strdup_printf ("xfce4-mixer \"%s\"", mixer->prefs->device); /* TODO: pass device from cfg */
	} else {
		if (mixer->prefs->execu)
			tmp = g_strdup (mixer->prefs->execu);
		else
			tmp = g_strdup ("xfce4-mixer");
	}
	/*g_spawn_command_line_async (tmp, NULL);*/
	exec_cmd(tmp, mixer->prefs->in_terminal, mixer->prefs->startup_nf);
	                        
	g_free (tmp);
}

static void
mixer_update_tips(t_mixer *mixer)
{
        gchar caption[128];
        
	g_snprintf(caption, sizeof(caption), _("Volume: %d%%"), 
	  xfce_mixer_control_calc_num_value (mixer->slider)
	);

	gtk_tooltips_set_tip(tooltips, GTK_WIDGET(mixer->ib), caption, NULL);
	gtk_tooltips_set_tip(tooltips, GTK_WIDGET(
		XFCE_MIXER_SLIDER_TINY (mixer->slider)->eb
	), caption,NULL);
}

static void
mixer_prefs_master_changed_cb (XfceMixerPreferences *prefs, gpointer whatsthat,  gpointer user_data)
{
	t_mixer *mixer;
	gchar *s;
	
	mixer = (t_mixer *) user_data;
	if (mixer && mixer->prefs) {
		g_object_get (G_OBJECT (mixer->prefs),
			"master", &s, NULL
		);
		
		g_object_set (G_OBJECT (mixer->slider), 
		"vcname", s,
		NULL
		);
		
		g_free (s);
		s = NULL;
		
		xfce_mixer_control_vc_feed_value (mixer->slider);
		mixer_update_tips (mixer);
	}
}

static void
mixer_value_changed_cb (GtkWidget *w, gpointer whatsthat, gpointer user_data)
{
	t_mixer *mixer;
	mixer = (t_mixer *) user_data;
	mixer_update_tips (mixer);
}

static gboolean
mixer_timer_cb (gpointer userdata)
{
	t_mixer *mixer;
	XFCE_PANEL_LOCK ();
	mixer = (t_mixer *) userdata;
	
	vc_handle_events ();

	xfce_mixer_control_vc_feed_value (mixer->slider);
	mixer_update_tips (mixer);
	XFCE_PANEL_UNLOCK ();
	
	return TRUE;
}

static void callback_vc_cb(char const *which, void *privdata)
{
	t_mixer *mixer;
	XFCE_PANEL_LOCK ();
	mixer = (t_mixer *) privdata;
	
	xfce_mixer_control_vc_feed_value (mixer->slider);
	mixer_update_tips (mixer);
	XFCE_PANEL_UNLOCK ();
}

static t_mixer *
mixer_new(void)
{
	t_mixer *mixer;
	GdkPixbuf *pb;
	GtkWidget *align;
	
	mixer = g_new0 (t_mixer, 1);

	mixer->prefs = XFCE_MIXER_PREFERENCES (xfce_mixer_preferences_new ());

	mixer->box = gtk_hbox_new (FALSE, 0);
	mixer->broken = FALSE; 
	gtk_widget_show (mixer->box);

	pb = get_pixbuf_for (mixer->broken);
	mixer->ib = (XfceIconbutton *)xfce_iconbutton_new_from_pixbuf (pb);
	g_object_unref (pb);
	gtk_button_set_relief (GTK_BUTTON(mixer->ib), GTK_RELIEF_NONE);
	gtk_widget_show (GTK_WIDGET (mixer->ib));
	
	g_signal_connect (G_OBJECT (mixer->ib), 
		"clicked", G_CALLBACK (xfce_mixer_launch_cb), mixer);

	gtk_box_pack_start (GTK_BOX (mixer->box), GTK_WIDGET (mixer->ib), TRUE, TRUE, 0);

	mixer->slider = XFCE_MIXER_CONTROL (xfce_mixer_slider_tiny_new ());
	g_signal_connect (
		G_OBJECT (mixer->slider), "notify::value", 
		G_CALLBACK (mixer_value_changed_cb), mixer
	);
	
	gtk_widget_show (GTK_WIDGET (mixer->slider));
	gtk_box_pack_start (GTK_BOX (mixer->box), GTK_WIDGET (mixer->slider), FALSE, TRUE, 0);
		
	g_signal_connect_swapped (
		G_OBJECT (mixer->ib), "scroll-event", 
		G_CALLBACK (xfce_mixer_slider_tiny_scroll_cb), 
		mixer->slider
	);

	align = gtk_alignment_new (0,0,0,0);
	gtk_widget_show (align);
	gtk_widget_set_size_request (align, border_width, -1);
	gtk_box_pack_start (GTK_BOX (mixer->box), align, FALSE, FALSE, 0);	
	

	g_signal_connect (G_OBJECT (mixer->prefs), "notify::master",
		G_CALLBACK (mixer_prefs_master_changed_cb), mixer 
	);
	
	mixer_prefs_master_changed_cb (mixer->prefs, NULL, mixer);

	xfce_mixer_control_vc_feed_value (mixer->slider);
	xfce_mixer_control_vc_attach (mixer->slider);
	mixer_update_tips (mixer);

	mixer->timer = g_timeout_add (UPDATE_TIMEOUT, 
		(GSourceFunc) mixer_timer_cb, 
		mixer
	);
	
	vc_set_volume_callback (callback_vc_cb, (void *) mixer);

	return mixer;
}


static void
mixer_control_free (Control *ctrl)
{
	t_mixer *mixer;
	g_return_if_fail(ctrl != NULL);
	g_return_if_fail(ctrl->data != NULL);
	vc_set_volume_callback (NULL, NULL);

	mixer = (t_mixer *)ctrl->data;
	if (mixer) {
		if (mixer->timer) {
			g_source_remove (mixer->timer);
			mixer->timer = 0;
		}
		if (mixer->prefs)
			g_object_unref (G_OBJECT (mixer->prefs));
		mixer->prefs = NULL;
	}
	g_free (mixer);
}

static void
mixer_read_config (Control *ctrl, xmlNodePtr parent)
{
	t_mixer *mixer;
	mixer = (t_mixer *) ctrl->data;
	if (!mixer->prefs)
		return;
		
	xfce_mixer_preferences_load (mixer->prefs, parent);
}

static void
mixer_write_config (Control *ctrl, xmlNodePtr parent)
{
	t_mixer *mixer;
	mixer = (t_mixer *) ctrl->data;
	
	if (!mixer->prefs)
		return;
		
	xfce_mixer_preferences_save (mixer->prefs, parent);
}

static void
mixer_attach_callback(Control *ctrl, const gchar *signal, GCallback cb,
                gpointer data)
{
	t_mixer *mixer;

	mixer = (t_mixer *) ctrl->data;
	
	g_signal_connect(mixer->ib, signal, cb, data);
	g_signal_connect(mixer->slider, signal, cb, data);
}

/*#define BIG_ICON*/

static void
mixer_set_size(Control *ctrl, int size)
{
	t_mixer	*mixer = (t_mixer *)ctrl->data;
	
	int	slider_width;
#ifndef BIG_ICON
	int	all;
	int	r;
#endif
	
	slider_width = 6 + 2 * size;
	
#ifdef BIG_ICON
	gtk_widget_set_size_request(GTK_WIDGET(mixer->ib), icon_size[size], icon_size[size]);
	gtk_widget_set_size_request(GTK_WIDGET(mixer->slider), slider_width, icon_size[size]);
#else
	all = icon_size[size];
	r = all - slider_width;
	if (r < all / 2) r = slider_width = all / 2;
		
	gtk_widget_set_size_request(GTK_WIDGET(mixer->ib), r, all);
	gtk_widget_set_size_request(GTK_WIDGET(mixer->slider), slider_width, all);
#endif

	gtk_widget_queue_resize (GTK_WIDGET (mixer->slider));
}



static void
mixer_create_options (Control *ctrl, GtkContainer *con, GtkWidget *done)
{
	t_mixer	*mixer = (t_mixer *)ctrl->data;

	GtkWidget *w;
	XfceMixerPrefbox *pb;
	w = xfce_mixer_prefbox_new (ctrl);
	gtk_widget_show (w);
	gtk_container_add (GTK_CONTAINER (con), w);

	pb = XFCE_MIXER_PREFBOX (w);
	mixer->pb = pb;
	xfce_mixer_prefbox_fill_defaults (pb);
	
	xfce_mixer_prefbox_fill_preferences (pb, mixer->prefs);
	g_signal_connect (G_OBJECT (done), "clicked", G_CALLBACK (mixer_prefs_ok_cb), mixer);
}

static void
mixer_set_theme(Control * control, const char *theme)
{
	GdkPixbuf	*pb;
	t_mixer		*mixer;
	
	mixer = (t_mixer *)control->data;
	
	pb = get_pixbuf_for(mixer->broken);
	xfce_iconbutton_set_pixbuf(XFCE_ICONBUTTON(mixer->ib), pb);
	g_object_unref(pb);
}

G_MODULE_EXPORT void 
g_module_unload() 
{
	xfce_mixer_cache_vc_free ();
}

#endif

