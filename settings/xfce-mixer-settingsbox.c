/* Generated by GOB (v2.0.6) on Sun Jan 25 17:45:07 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "xfce-mixer-settingsbox.h"

#include "xfce-mixer-settingsbox-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 1 "mixer-settingsbox.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#line 33 "xfce-mixer-settingsbox.c"

#line 6 "mixer-settingsbox.gob"

#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>
#include <libxfcegui4/xfce_framebox.h>
#include <libxfce4mcs/mcs-manager.h>

#line 42 "xfce-mixer-settingsbox.c"

#line 12 "mixer-settingsbox.gob"

#include "helpers3.inc"
#include "vc.h"
#include "stringlist.inc"
#include "mixer-mcs-names.h"
#include "string_option_menu.h"

#define SHOW_DEFAULT_DEVICE_ENTRY
#define SETTINGS_LIST_SEP "@"
#define CHANNEL "sound"
/*#define TRACE g_warning(s)*/

static gchar *fmt_device_cb(gchar const *c)
{
	gchar *s;
	if(!c)
		return NULL;

#ifndef SHOW_DEFAULT_DEVICE_ENTRY
	if (g_str_equal (c, "default"))
		return NULL;
#endif

	if (g_str_has_prefix (c, "/dev/")) {
		c = c + strlen("/dev/");
	}

	s = g_strdup (c);

	return s;
}


#line 82 "xfce-mixer-settingsbox.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_SETTINGSBOX(x)
#define SELF_CONST(x) XFCE_MIXER_SETTINGSBOX_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_SETTINGSBOX(x)
#define TYPE_SELF XFCE_TYPE_MIXER_SETTINGSBOX
#define SELF_CLASS(x) XFCE_MIXER_SETTINGSBOX_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_SETTINGSBOX_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerSettingsbox Self;
typedef XfceMixerSettingsboxClass SelfClass;

/* here are local prototypes */
static void xfce_mixer_settingsbox_class_init (XfceMixerSettingsboxClass * c) G_GNUC_UNUSED;
static void xfce_mixer_settingsbox_init (XfceMixerSettingsbox * self) G_GNUC_UNUSED;
static void xfce_mixer_settingsbox_device_changed_t_cb (XfceMixerSettingsbox * self, GtkOptionMenu * om) G_GNUC_UNUSED;
static gchar * xfce_mixer_settingsbox_mcs_s_name (XfceMixerSettingsbox * self) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GtkVBoxClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_load(args...) xfce_mixer_settingsbox_load(args)
#define self_save(args...) xfce_mixer_settingsbox_save(args)
#define self_device_changed_t_cb(args...) xfce_mixer_settingsbox_device_changed_t_cb(args)
#define self_device_changed_cb(args...) xfce_mixer_settingsbox_device_changed_cb(args)
#define self_devicelst_updated(args...) xfce_mixer_settingsbox_devicelst_updated(args)
#define self_mcs_s_name(args...) xfce_mixer_settingsbox_mcs_s_name(args)
#define self_fill_right_box(args...) xfce_mixer_settingsbox_fill_right_box(args)
#define self_apply_right_box(args...) xfce_mixer_settingsbox_apply_right_box(args)
#define self_new() xfce_mixer_settingsbox_new()
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static void (* const self_load) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_load;
static void (* const self_save) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_save;
static void (* const self_device_changed_t_cb) (XfceMixerSettingsbox * self, GtkOptionMenu * om) = xfce_mixer_settingsbox_device_changed_t_cb;
static void (* const self_device_changed_cb) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_device_changed_cb;
static void (* const self_devicelst_updated) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_devicelst_updated;
static gchar * (* const self_mcs_s_name) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_mcs_s_name;
static void (* const self_fill_right_box) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_fill_right_box;
static void (* const self_apply_right_box) (XfceMixerSettingsbox * self) = xfce_mixer_settingsbox_apply_right_box;
static XfceMixerSettingsbox * (* const self_new) (void) = xfce_mixer_settingsbox_new;

GType
xfce_mixer_settingsbox_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerSettingsboxClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_settingsbox_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerSettingsbox),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_settingsbox_init,
		};

		type = g_type_register_static (GTK_TYPE_VBOX, "XfceMixerSettingsbox", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerSettingsbox *)g_object_new(xfce_mixer_settingsbox_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerSettingsbox * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerSettingsbox *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerSettingsbox *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerSettingsbox *)g_object_new_valist (xfce_mixer_settingsbox_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::finalize"
	XfceMixerSettingsbox *self = XFCE_MIXER_SETTINGSBOX (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 62 "mixer-settingsbox.gob"
	if(self->device_lst) { ((*(void (*)(void *))stringlist_free)) (self->device_lst); self->device_lst = NULL; }
#line 180 "xfce-mixer-settingsbox.c"
#line 64 "mixer-settingsbox.gob"
	if(self->sel_device) { ((*(void (*)(void *))g_free)) (self->sel_device); self->sel_device = NULL; }
#line 183 "xfce-mixer-settingsbox.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_settingsbox_class_init (XfceMixerSettingsboxClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::class_init"
	GObjectClass *g_object_class = (GObjectClass*) c;

	parent_class = g_type_class_ref (GTK_TYPE_VBOX);

	g_object_class->finalize = ___finalize;
	return;
	c = NULL;
	g_object_class = NULL;
}
#undef __GOB_FUNCTION__
#line 84 "mixer-settingsbox.gob"
static void 
xfce_mixer_settingsbox_init (XfceMixerSettingsbox * self)
#line 206 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::init"
#line 12 "mixer-settingsbox.gob"
	self->dev_frame = NULL;
#line 211 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->dev_label = NULL;
#line 214 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->useful_frame = NULL;
#line 217 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->useful_tv = NULL;
#line 220 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->useful_model = NULL;
#line 223 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->useful_sc = NULL;
#line 226 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->devlist_om = NULL;
#line 229 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->cols = NULL;
#line 232 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->right_box = NULL;
#line 235 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->device_lst = NULL;
#line 238 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->sel_device = NULL;
#line 241 "xfce-mixer-settingsbox.c"
#line 12 "mixer-settingsbox.gob"
	self->manager = NULL;
#line 244 "xfce-mixer-settingsbox.c"
 {
#line 85 "mixer-settingsbox.gob"

		self->cols = GTK_BOX (gtk_hbox_new (FALSE, 5));
		gtk_widget_show (GTK_WIDGET (self->cols));

		/*self->sep = gtk_vseparator_new ();
		gtk_widget_show (GTK_WIDGET (self->sep));*/

		self->devlist_om = GTK_OPTION_MENU (gtk_option_menu_new ());
		gtk_widget_show (GTK_WIDGET (self->devlist_om));

		self->right_box = GTK_BOX (gtk_vbox_new (FALSE, 5));
		gtk_widget_show (GTK_WIDGET (self->right_box));

		self->dev_frame = xfce_framebox_new (_ ("Device"), TRUE);
		gtk_widget_show (GTK_WIDGET (self->dev_frame));

		self->dev_label = GTK_LABEL (gtk_label_new (_("None")));
		/*gtk_widget_show (GTK_WIDGET (self->dev_label));*/

		self->useful_frame = xfce_framebox_new (_ ("Useful Controls"), TRUE);
		gtk_widget_show (GTK_WIDGET (self->useful_frame));

		self->useful_tv = GTK_TREE_VIEW (gtk_tree_view_new ());

		gtk_tree_view_set_headers_visible (self->useful_tv, FALSE);

		gtk_widget_show (GTK_WIDGET (self->useful_tv));

		self->useful_model = GTK_TREE_STORE (gtk_tree_store_new (2, G_TYPE_BOOLEAN, G_TYPE_STRING));
		gtk_tree_view_set_model (self->useful_tv, GTK_TREE_MODEL (self->useful_model));

		gtk_tree_view_append_column (self->useful_tv, 
			tree_new_check_column ("", 0, GTK_TREE_MODEL (self->useful_model)
		));
		gtk_tree_view_append_column (self->useful_tv, 
			tree_new_text_column ("", 1
		));


		self->useful_sc = GTK_SCROLLED_WINDOW (gtk_scrolled_window_new (NULL, NULL));
		gtk_scrolled_window_set_policy (self->useful_sc, GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);
		gtk_container_add (GTK_CONTAINER (self->useful_sc), GTK_WIDGET (self->useful_tv));
		gtk_widget_show (GTK_WIDGET (self->useful_sc));

		xfce_framebox_add (XFCE_FRAMEBOX (self->useful_frame), GTK_WIDGET (self->useful_sc));
		xfce_framebox_add (XFCE_FRAMEBOX (self->dev_frame), GTK_WIDGET (self->devlist_om));
		/*xfce_framebox_add (XFCE_FRAMEBOX (self->dev_frame), GTK_WIDGET (self->dev_label));*/
		gtk_box_pack_start (GTK_BOX (self), GTK_WIDGET (self->dev_label), FALSE, FALSE, 0);

		gtk_box_pack_start (GTK_BOX (self->right_box), GTK_WIDGET (self->dev_frame), FALSE, FALSE, 0);
		gtk_box_pack_start (GTK_BOX (self->right_box), GTK_WIDGET (self->useful_frame), TRUE, TRUE, 0);

		/*gtk_box_pack_start (GTK_BOX (self->cols), GTK_WIDGET (self->devlist_om), FALSE, FALSE, 0);*/
		/*gtk_box_pack_start (GTK_BOX (self->cols), GTK_WIDGET (self->sep), FALSE, FALSE, 0);*/
		gtk_box_pack_start (GTK_BOX (self->cols), GTK_WIDGET (self->right_box), FALSE, FALSE, 0);

		/*g_signal_connect_swapped (G_OBJECT (self->devlist_model), "row-changed", G_CALLBACK (self_device_changed_t_cb), self);*/

		g_signal_connect_swapped (G_OBJECT (self->devlist_om), "changed", G_CALLBACK (self_device_changed_t_cb), self);

		/*g_signal_connect_swapped (G_OBJECT (self), "destroy", G_CALLBACK (self_device_changed_d_cb), self);*/

		gtk_box_pack_start (GTK_BOX (self), GTK_WIDGET (self->cols), TRUE, TRUE, 0);

		/*self_devicelst_updated (self);*/

		gtk_widget_set_size_request (GTK_WIDGET (self), -1, 300);
	
#line 315 "xfce-mixer-settingsbox.c"
 }
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__


#line 68 "mixer-settingsbox.gob"
void 
xfce_mixer_settingsbox_load (XfceMixerSettingsbox * self)
#line 326 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::load"
#line 68 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 68 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 333 "xfce-mixer-settingsbox.c"
{
#line 69 "mixer-settingsbox.gob"
	
		if (!self->manager)
			return;

		self_devicelst_updated (self);
	}}
#line 342 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 76 "mixer-settingsbox.gob"
void 
xfce_mixer_settingsbox_save (XfceMixerSettingsbox * self)
#line 348 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::save"
#line 76 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 76 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 355 "xfce-mixer-settingsbox.c"
{
#line 77 "mixer-settingsbox.gob"
	
		if (!self->manager)
			return;

		self_device_changed_cb (self);
	}}
#line 364 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__


#line 159 "mixer-settingsbox.gob"
static void 
xfce_mixer_settingsbox_device_changed_t_cb (XfceMixerSettingsbox * self, GtkOptionMenu * om)
#line 371 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::device_changed_t_cb"
#line 159 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 159 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 378 "xfce-mixer-settingsbox.c"
{
#line 160 "mixer-settingsbox.gob"
	
		self_device_changed_cb (self);
	}}
#line 384 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 164 "mixer-settingsbox.gob"
void 
xfce_mixer_settingsbox_device_changed_cb (XfceMixerSettingsbox * self)
#line 390 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::device_changed_cb"
#line 164 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 164 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 397 "xfce-mixer-settingsbox.c"
{
#line 165 "mixer-settingsbox.gob"
	
		gchar const *s;
		GList *g;
		GList *cl;
		GtkTreeIter iter;
		volcontrol_t *vci;
		gint i;
		TRACE ("enter device_changed_cb");

		self_apply_right_box (self);

		i = gtk_option_menu_get_history (self->devlist_om);
		if ( i == -1)
			return;

		s = (gchar *)g_list_nth_data (self->device_lst, i);
		if (!s)
			return;

		if (s) {
			TRACE (s);
			TRACE ("set dev_label");

			gtk_label_set_text (self->dev_label, s);
			TRACE ("set vc device");
			vc_set_device (s);
			TRACE ("free sel_device");
			if (self->sel_device) {
				g_free (self->sel_device);
				self->sel_device = NULL;
			}
			TRACE ("set sel_device");
			self->sel_device = g_strdup (s);
			TRACE ("free selected device string");

			/*g_free (s);*/
		}

		TRACE ("fill useful controls list");
		/* fill "useful controls" list */
		gtk_tree_store_clear (self->useful_model);

		cl = vc_get_control_list ();
		g = cl;
		while (g) {
			vci = (volcontrol_t *) g->data;

			if (vci && vci->name) {
				gtk_tree_store_append (self->useful_model, &iter, NULL);
				gtk_tree_store_set (self->useful_model, &iter, 
					0, TRUE,
					1, vci->name, 
				-1);

			}

			g = g_list_next (g);
		}
		TRACE ("fill vccl");
		if (cl)
			vc_free_control_list (cl);

		TRACE ("fill right_box soon");
		self_fill_right_box (self);
		TRACE ("leave device_changed_cb");

		mcs_manager_notify (self->manager, CHANNEL);
	}}
#line 468 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 234 "mixer-settingsbox.gob"
void 
xfce_mixer_settingsbox_devicelst_updated (XfceMixerSettingsbox * self)
#line 474 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::devicelst_updated"
#line 234 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 234 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 481 "xfce-mixer-settingsbox.c"
{
#line 235 "mixer-settingsbox.gob"
	
		gint	i;
		gint	cnt;
		if (self->device_lst) {
			stringlist_free (self->device_lst);
			self->device_lst = NULL;
		}
		self->device_lst = vc_get_device_list ();


		fill_string_option_menu_2 (
			self->devlist_om, 
			self->device_lst,
			fmt_device_cb
		);


		if (!self->device_lst)
			return;

		cnt = g_list_length (self->device_lst);
		for(i = 0; i < cnt; i++) {
			gtk_option_menu_set_history (self->devlist_om, i);
			self_device_changed_cb (self);
		}
		if (cnt >= 0)
			gtk_option_menu_set_history (self->devlist_om, 0);
	}}
#line 512 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 264 "mixer-settingsbox.gob"
static gchar * 
xfce_mixer_settingsbox_mcs_s_name (XfceMixerSettingsbox * self)
#line 518 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::mcs_s_name"
#line 264 "mixer-settingsbox.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 264 "mixer-settingsbox.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self), (gchar * )0);
#line 525 "xfce-mixer-settingsbox.c"
{
#line 265 "mixer-settingsbox.gob"
	
		if (!self->sel_device)
			return NULL;

		return g_strdup_printf (MIXER_USEFUL_FMT, self->sel_device);
	}}
#line 534 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 272 "mixer-settingsbox.gob"
void 
xfce_mixer_settingsbox_fill_right_box (XfceMixerSettingsbox * self)
#line 540 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::fill_right_box"
#line 272 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 272 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 547 "xfce-mixer-settingsbox.c"
{
#line 273 "mixer-settingsbox.gob"
	
		gchar *n;
		gchar *s;
		gchar *s2;
		gchar *all;
		gboolean neof;
		gboolean b;
		McsSetting *setting;
		GtkTreeIter iter;
		if (!self->manager)
			return;

		n = self_mcs_s_name (self);
		if (!n)
			return;

	        if ((setting = mcs_manager_setting_lookup(self->manager,
                                        n, CHANNEL)) == NULL
		) {
			self_apply_right_box (self);
		}

	        if ((setting = mcs_manager_setting_lookup(self->manager,
                                        n, CHANNEL)) == NULL
		) {
			g_free (n);
			return;
		}

		g_free (n);

		all = setting->data.v_string;
		if (!all) 
			return;

		TRACE ("mcs_manager_setting_lookup");
		TRACE (all);

		neof = gtk_tree_model_get_iter_first (
			GTK_TREE_MODEL (self->useful_model), &iter);

		while (neof) {
			gtk_tree_model_get (GTK_TREE_MODEL (self->useful_model), 
				&iter, 1, &s, -1);

			b = FALSE;
			if (s) {
				s2 = g_strdup_printf ("%s%s%s", 
					SETTINGS_LIST_SEP,
					s,
					SETTINGS_LIST_SEP);
				g_free (s);
				s = s2;
				s2 = NULL;
			}

			if (s) {
				if (g_strrstr (all, s)) { /*contained*/
					b = TRUE;
				}
				g_free (s);
			}
			gtk_tree_store_set (
				self->useful_model,
				&iter, 
				0, b, -1);
			
			neof = gtk_tree_model_iter_next (GTK_TREE_MODEL (self->useful_model), &iter);
		}
			
		/*g_free (all);*/
		TRACE ("leave fill");
	}}
#line 623 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 347 "mixer-settingsbox.gob"
void 
xfce_mixer_settingsbox_apply_right_box (XfceMixerSettingsbox * self)
#line 629 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::apply_right_box"
#line 347 "mixer-settingsbox.gob"
	g_return_if_fail (self != NULL);
#line 347 "mixer-settingsbox.gob"
	g_return_if_fail (XFCE_IS_MIXER_SETTINGSBOX (self));
#line 636 "xfce-mixer-settingsbox.c"
{
#line 348 "mixer-settingsbox.gob"
	
		gchar *n;
		gchar *v;
		gchar *v2;
		gchar *s;
		gboolean b;
		gboolean neof;
		GtkTreeIter iter;
		if (!self->sel_device || !self->manager)
			return;

		TRACE ("enter apply_right_box");

		v = g_strdup ("");

		neof = gtk_tree_model_get_iter_first (
			GTK_TREE_MODEL (self->useful_model), &iter);

		while (neof) {
			gtk_tree_model_get (GTK_TREE_MODEL (self->useful_model), 
				&iter, 0, &b, 1, &s, -1);

			if (s) {
				if (b) {
					v2 = g_strdup_printf("%s%s%s", v, SETTINGS_LIST_SEP, s);
					g_free (v);
					v = v2;
					v2 = NULL;
				}
				g_free (s);
			}			

			neof = gtk_tree_model_iter_next (
				GTK_TREE_MODEL (self->useful_model), &iter);
		}

		v2 = g_strdup_printf("%s%s%s", v, SETTINGS_LIST_SEP,  "");
		g_free (v);
		v = v2;
		v2 = NULL;

		n = self_mcs_s_name (self);
		if (!n)
			return;

		mcs_manager_set_string (self->manager,
                                n, CHANNEL, v);
		TRACE (n);
		TRACE ("mcs_manager_set_string");
		TRACE (v);
		g_free (n);

		TRACE ("leave apply_right_box");
	}}
#line 693 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__

#line 403 "mixer-settingsbox.gob"
XfceMixerSettingsbox * 
xfce_mixer_settingsbox_new (void)
#line 699 "xfce-mixer-settingsbox.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Settingsbox::new"
{
#line 404 "mixer-settingsbox.gob"
	
		return XFCE_MIXER_SETTINGSBOX (GET_NEW);
	}}
#line 707 "xfce-mixer-settingsbox.c"
#undef __GOB_FUNCTION__


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_settingsbox_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_load)();
	((void (*)(void))self_save)();
	((void (*)(void))self_device_changed_t_cb)();
	((void (*)(void))self_device_changed_cb)();
	((void (*)(void))self_devicelst_updated)();
	((void (*)(void))self_mcs_s_name)();
	((void (*)(void))self_fill_right_box)();
	((void (*)(void))self_apply_right_box)();
	((void (*)(void))self_new)();
	___xfce_mixer_settingsbox_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */
