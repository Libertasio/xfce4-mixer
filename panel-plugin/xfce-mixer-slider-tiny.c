/* Generated by GOB (v2.0.9) on Fri Oct 29 20:42:59 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 9

#define selfp (self->_priv)

#include "xfce-mixer-slider-tiny.h"

#include "xfce-mixer-slider-tiny-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 1 "mixer-slider-tiny.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#line 31 "xfce-mixer-slider-tiny.c"

#line 6 "mixer-slider-tiny.gob"

#include "xfce-mixer-control.h"

#line 37 "xfce-mixer-slider-tiny.c"

#line 10 "mixer-slider-tiny.gob"

extern GtkTooltips *tooltips;

#line 43 "xfce-mixer-slider-tiny.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_SLIDER_TINY(x)
#define SELF_CONST(x) XFCE_MIXER_SLIDER_TINY_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_SLIDER_TINY(x)
#define TYPE_SELF XFCE_TYPE_MIXER_SLIDER_TINY
#define SELF_CLASS(x) XFCE_MIXER_SLIDER_TINY_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_SLIDER_TINY_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerSliderTiny Self;
typedef XfceMixerSliderTinyClass SelfClass;

/* here are local prototypes */
static void xfce_mixer_slider_tiny_class_init (XfceMixerSliderTinyClass * c) G_GNUC_UNUSED;
static void xfce_mixer_slider_tiny_init (XfceMixerSliderTiny * self) G_GNUC_UNUSED;
static void ___6_xfce_mixer_slider_tiny_value_changed (XfceMixerControl * pself) G_GNUC_UNUSED;
static void ___7_xfce_mixer_slider_tiny_vcname_changed (XfceMixerControl * pself) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static XfceMixerControlClass *parent_class = NULL;

/* Short form macros */
#define self_set_vval xfce_mixer_slider_tiny_set_vval
#define self_scroll_cb xfce_mixer_slider_tiny_scroll_cb
#define self_button_cb xfce_mixer_slider_tiny_button_cb
#define self_new xfce_mixer_slider_tiny_new
GType
xfce_mixer_slider_tiny_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerSliderTinyClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_slider_tiny_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerSliderTiny),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_slider_tiny_init,
			NULL
		};

		type = g_type_register_static (XFCE_TYPE_MIXER_CONTROL, "XfceMixerSliderTiny", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerSliderTiny *)g_object_new(xfce_mixer_slider_tiny_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerSliderTiny * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerSliderTiny *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerSliderTiny *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerSliderTiny *)g_object_new_valist (xfce_mixer_slider_tiny_get_type (), first, ap);
	va_end (ap);
	return ret;
}

static void 
xfce_mixer_slider_tiny_class_init (XfceMixerSliderTinyClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::class_init"
	XfceMixerControlClass *xfce_mixer_control_class = (XfceMixerControlClass *)c;

	parent_class = g_type_class_ref (XFCE_TYPE_MIXER_CONTROL);

#line 125 "mixer-slider-tiny.gob"
	xfce_mixer_control_class->value_changed = ___6_xfce_mixer_slider_tiny_value_changed;
#line 139 "mixer-slider-tiny.gob"
	xfce_mixer_control_class->vcname_changed = ___7_xfce_mixer_slider_tiny_vcname_changed;
#line 125 "xfce-mixer-slider-tiny.c"
}
#undef __GOB_FUNCTION__
#line 33 "mixer-slider-tiny.gob"
static void 
xfce_mixer_slider_tiny_init (XfceMixerSliderTiny * self G_GNUC_UNUSED)
#line 131 "xfce-mixer-slider-tiny.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::init"
#line 10 "mixer-slider-tiny.gob"
	self->progress = NULL;
#line 136 "xfce-mixer-slider-tiny.c"
#line 10 "mixer-slider-tiny.gob"
	self->eb = NULL;
#line 139 "xfce-mixer-slider-tiny.c"
 {
#line 34 "mixer-slider-tiny.gob"

		GtkRcStyle *rc;
		GdkColor color;

		self->progress = GTK_PROGRESS_BAR (gtk_progress_bar_new ());
		gtk_progress_bar_set_orientation (self->progress, GTK_PROGRESS_BOTTOM_TO_TOP);

		rc = gtk_widget_get_modifier_style (GTK_WIDGET (self->progress));
		if (!rc)
			rc = gtk_rc_style_new ();

		gdk_color_parse ("#00c000", &color);

		if (rc) {
			rc->color_flags[GTK_STATE_PRELIGHT] |= GTK_RC_BG;
			rc->bg[GTK_STATE_PRELIGHT] = color;
		}

		gtk_widget_modify_style (GTK_WIDGET (self->progress), rc);

		gtk_widget_show (GTK_WIDGET (self->progress));

		self->eb = GTK_EVENT_BOX (gtk_event_box_new ());
		gtk_widget_show (GTK_WIDGET (self->eb));

		gtk_container_add (GTK_CONTAINER (self->eb), GTK_WIDGET (self->progress));

		gtk_box_pack_start (GTK_BOX (self), GTK_WIDGET (self->eb), TRUE, TRUE, 5);

		g_signal_connect_swapped (self->eb, "scroll-event", G_CALLBACK(self_scroll_cb), self);
		g_signal_connect_swapped (self->eb, "button-press-event", G_CALLBACK(self_button_cb), self);
		g_signal_connect_swapped (self->eb, "button-release-event", G_CALLBACK(self_button_cb), self);
	
#line 175 "xfce-mixer-slider-tiny.c"
 }
}
#undef __GOB_FUNCTION__


#line 19 "mixer-slider-tiny.gob"
void 
xfce_mixer_slider_tiny_set_vval (XfceMixerSliderTiny * self, gint vval)
#line 184 "xfce-mixer-slider-tiny.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::set_vval"
#line 19 "mixer-slider-tiny.gob"
	g_return_if_fail (self != NULL);
#line 19 "mixer-slider-tiny.gob"
	g_return_if_fail (XFCE_IS_MIXER_SLIDER_TINY (self));
#line 191 "xfce-mixer-slider-tiny.c"
{
#line 20 "mixer-slider-tiny.gob"
	
		gdouble val;
		gchar *tmp;

		val = vval;
		tmp = g_strdup_printf("%d", (gint) val);
		g_object_set (G_OBJECT (self), "value", tmp, NULL);
		g_free (tmp);

		gtk_progress_bar_set_fraction(GTK_PROGRESS_BAR(self->progress),
		  val / 100.0);
	}}
#line 206 "xfce-mixer-slider-tiny.c"
#undef __GOB_FUNCTION__


#line 68 "mixer-slider-tiny.gob"
gboolean 
xfce_mixer_slider_tiny_scroll_cb (XfceMixerSliderTiny * self, GdkEventScroll * event, GtkWidget * w)
#line 213 "xfce-mixer-slider-tiny.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::scroll_cb"
#line 68 "mixer-slider-tiny.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 68 "mixer-slider-tiny.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_SLIDER_TINY (self), (gboolean )0);
#line 220 "xfce-mixer-slider-tiny.c"
{
#line 69 "mixer-slider-tiny.gob"
	
		int	vol;	/* new volume */
		vol = xfce_mixer_control_calc_num_value (XFCE_MIXER_CONTROL (self));
	
		if (event->type != GDK_SCROLL)
			return FALSE;
	
		if (event->direction == GDK_SCROLL_DOWN) {
			vol -= 7;
			if (vol < 0) { vol = 0; }
		} else if (event->direction == GDK_SCROLL_UP) {
			vol += 7;
			if (vol > 100) { vol = 100; }
		}

		self_set_vval (self, vol);
		return TRUE;

	}}
#line 242 "xfce-mixer-slider-tiny.c"
#undef __GOB_FUNCTION__

#line 89 "mixer-slider-tiny.gob"
gboolean 
xfce_mixer_slider_tiny_button_cb (XfceMixerSliderTiny * self, GdkEventButton * b, GtkWidget * widget)
#line 248 "xfce-mixer-slider-tiny.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::button_cb"
#line 89 "mixer-slider-tiny.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 89 "mixer-slider-tiny.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_SLIDER_TINY (self), (gboolean )0);
#line 255 "xfce-mixer-slider-tiny.c"
{
#line 90 "mixer-slider-tiny.gob"
	
		int	y; /* pos */
		int	sy; /* size */

		y = (int)b->y;

		if (b->button == 3 || b->button == 2) {
			if (b->type == GDK_BUTTON_PRESS) {
				y = 0;
			} else {
				return TRUE;
			}
		} else if (b->button == 1) {
			sy = widget->allocation.height;
			if (sy != 0) {
				/* this is a hack 'cause I dont know how to get the height 
				 * of the border of the progressbar yet ;) 
				 */
				y = (sy + 2 - y) * 100 / sy;
				if (y <= 0) y = 0;
			} else y = 0;
		} else return TRUE;

		if (y < 0) { y = 0; }
		if (y > 100) { y = 100; }
		self_set_vval (self, y);
		return TRUE;
	}}
#line 286 "xfce-mixer-slider-tiny.c"
#undef __GOB_FUNCTION__

#line 120 "mixer-slider-tiny.gob"
XfceMixerControl * 
xfce_mixer_slider_tiny_new (void)
#line 292 "xfce-mixer-slider-tiny.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::new"
{
#line 121 "mixer-slider-tiny.gob"
	
		return XFCE_MIXER_CONTROL(GET_NEW);
	}}
#line 300 "xfce-mixer-slider-tiny.c"
#undef __GOB_FUNCTION__

#line 125 "mixer-slider-tiny.gob"
static void 
___6_xfce_mixer_slider_tiny_value_changed (XfceMixerControl * pself G_GNUC_UNUSED)
#line 306 "xfce-mixer-slider-tiny.c"
#define PARENT_HANDLER(___pself) \
	{ if(XFCE_MIXER_CONTROL_CLASS(parent_class)->value_changed) \
		(* XFCE_MIXER_CONTROL_CLASS(parent_class)->value_changed)(___pself); }
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::value_changed"
#line 125 "mixer-slider-tiny.gob"
	g_return_if_fail (pself != NULL);
#line 125 "mixer-slider-tiny.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (pself));
#line 316 "xfce-mixer-slider-tiny.c"
{
#line 127 "mixer-slider-tiny.gob"
	
		gint v;

		Self *self;

		self = SELF (pself);

		v = xfce_mixer_control_calc_num_value (pself);

		gtk_progress_bar_set_fraction (GTK_PROGRESS_BAR (self->progress), ((gdouble) v) / 100.0);
	}}
#line 330 "xfce-mixer-slider-tiny.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 139 "mixer-slider-tiny.gob"
static void 
___7_xfce_mixer_slider_tiny_vcname_changed (XfceMixerControl * pself G_GNUC_UNUSED)
#line 337 "xfce-mixer-slider-tiny.c"
#define PARENT_HANDLER(___pself) \
	{ if(XFCE_MIXER_CONTROL_CLASS(parent_class)->vcname_changed) \
		(* XFCE_MIXER_CONTROL_CLASS(parent_class)->vcname_changed)(___pself); }
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Slider:Tiny::vcname_changed"
#line 139 "mixer-slider-tiny.gob"
	g_return_if_fail (pself != NULL);
#line 139 "mixer-slider-tiny.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (pself));
#line 347 "xfce-mixer-slider-tiny.c"
{
#line 141 "mixer-slider-tiny.gob"
	
		Self *self;
		char *sanename;
		PARENT_HANDLER (pself);

		self = SELF (pself);
		sanename = xfce_mixer_control_calc_sanename (pself);
/*		gtk_label_set_text (GTK_LABEL (self->label), sanename);*/
		if (sanename && self->progress) {
			gtk_tooltips_set_tip (tooltips, GTK_WIDGET (self->progress), sanename, NULL);
		}
		g_free (sanename);
	}}
#line 363 "xfce-mixer-slider-tiny.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER
