/* Generated by GOB (v2.0.6) on Sun Jan  4 21:19:15 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include "xfce-mixer-switch.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 2 "mixer-switch.gob"

#include <gtk/gtk.h>
#include "xfce-mixer-control.h"

#line 28 "xfce-mixer-switch.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_SWITCH(x)
#define SELF_CONST(x) XFCE_MIXER_SWITCH_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_SWITCH(x)
#define TYPE_SELF XFCE_TYPE_MIXER_SWITCH
#define SELF_CLASS(x) XFCE_MIXER_SWITCH_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_SWITCH_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerSwitch Self;
typedef XfceMixerSwitchClass SelfClass;

/* here are local prototypes */
static void xfce_mixer_switch_class_init (XfceMixerSwitchClass * c) G_GNUC_UNUSED;
static void xfce_mixer_switch_init (XfceMixerSwitch * self) G_GNUC_UNUSED;
static void ___3_xfce_mixer_switch_vcname_changed (XfceMixerControl * pself) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static XfceMixerControlClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_new() xfce_mixer_switch_new()
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static XfceMixerControl * (* const self_new) (void) = xfce_mixer_switch_new;

GType
xfce_mixer_switch_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerSwitchClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_switch_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerSwitch),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_switch_init,
		};

		type = g_type_register_static (XFCE_TYPE_MIXER_CONTROL, "XfceMixerSwitch", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerSwitch *)g_object_new(xfce_mixer_switch_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerSwitch * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerSwitch *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerSwitch *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerSwitch *)g_object_new_valist (xfce_mixer_switch_get_type (), first, ap);
	va_end (ap);
	return ret;
}

static void 
xfce_mixer_switch_class_init (XfceMixerSwitchClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Switch::class_init"
	XfceMixerControlClass *xfce_mixer_control_class = (XfceMixerControlClass *)c;

	parent_class = g_type_class_ref (XFCE_TYPE_MIXER_CONTROL);

#line 22 "mixer-switch.gob"
	xfce_mixer_control_class->vcname_changed = ___3_xfce_mixer_switch_vcname_changed;
#line 109 "xfce-mixer-switch.c"
	return;
	c = NULL;
}
#undef __GOB_FUNCTION__
#line 10 "mixer-switch.gob"
static void 
xfce_mixer_switch_init (XfceMixerSwitch * self)
#line 117 "xfce-mixer-switch.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Switch::init"
#line 2 "mixer-switch.gob"
	self->button = NULL;
#line 122 "xfce-mixer-switch.c"
 {
#line 11 "mixer-switch.gob"

		self->button = GTK_CHECK_BUTTON (gtk_check_button_new ());
		gtk_widget_show (GTK_WIDGET (self->button));
		gtk_box_pack_start (GTK_BOX (self), GTK_WIDGET (self->button), FALSE, FALSE, 0);
	
#line 130 "xfce-mixer-switch.c"
 }
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__



#line 17 "mixer-switch.gob"
XfceMixerControl * 
xfce_mixer_switch_new (void)
#line 142 "xfce-mixer-switch.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Switch::new"
{
#line 18 "mixer-switch.gob"
	
		return XFCE_MIXER_CONTROL(GET_NEW);
	}}
#line 150 "xfce-mixer-switch.c"
#undef __GOB_FUNCTION__

#line 22 "mixer-switch.gob"
static void 
___3_xfce_mixer_switch_vcname_changed (XfceMixerControl * pself)
#line 156 "xfce-mixer-switch.c"
#define PARENT_HANDLER(___pself) \
	{ if(XFCE_MIXER_CONTROL_CLASS(parent_class)->vcname_changed) \
		(* XFCE_MIXER_CONTROL_CLASS(parent_class)->vcname_changed)(___pself); }
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Switch::vcname_changed"
#line 22 "mixer-switch.gob"
	g_return_if_fail (pself != NULL);
#line 22 "mixer-switch.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (pself));
#line 166 "xfce-mixer-switch.c"
{
#line 24 "mixer-switch.gob"
	
		Self *self;
		char *sanename;

		self = SELF (pself);
		PARENT_HANDLER (pself);

		sanename = xfce_mixer_control_calc_sanename (pself);
		gtk_button_set_label (GTK_BUTTON (self->button), sanename);
		g_free (sanename);
        }}
#line 180 "xfce-mixer-switch.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_switch_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_new)();
	___xfce_mixer_switch_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */

