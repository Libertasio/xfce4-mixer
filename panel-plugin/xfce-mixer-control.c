/* Generated by GOB (v2.0.6) on Thu Jan  8 17:27:33 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "xfce-mixer-control.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 3 "mixer-control.gob"

#include <stdio.h>
#include <stdlib.h>
#define emit 

#line 31 "xfce-mixer-control.c"

#line 9 "mixer-control.gob"

#include <gtk/gtk.h>

#line 37 "xfce-mixer-control.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_CONTROL(x)
#define SELF_CONST(x) XFCE_MIXER_CONTROL_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_CONTROL(x)
#define TYPE_SELF XFCE_TYPE_MIXER_CONTROL
#define SELF_CLASS(x) XFCE_MIXER_CONTROL_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_CONTROL_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerControl Self;
typedef XfceMixerControlClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void xfce_mixer_control_class_init (XfceMixerControlClass * c) G_GNUC_UNUSED;
static void xfce_mixer_control_init (XfceMixerControl * self) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_ORDERNO,
	PROP_LOCATION,
	PROP_VALUE,
	PROP_VCNAME
};

/* pointer to the class of our parent */
static GtkVBoxClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_calc_sanename(args...) xfce_mixer_control_calc_sanename(args)
#define self_vcname_changed(args...) xfce_mixer_control_vcname_changed(args)
#define self_value_changed(args...) xfce_mixer_control_value_changed(args)
#define self_location_changed(args...) xfce_mixer_control_location_changed(args)
#define self_calc_num_value(args...) xfce_mixer_control_calc_num_value(args)
#define self_new() xfce_mixer_control_new()
#define self_get_orderno(args...) xfce_mixer_control_get_orderno(args)
#define self_set_orderno(args...) xfce_mixer_control_set_orderno(args)
#define self_get_location(args...) xfce_mixer_control_get_location(args)
#define self_set_location(args...) xfce_mixer_control_set_location(args)
#define self_get_value(args...) xfce_mixer_control_get_value(args)
#define self_set_value(args...) xfce_mixer_control_set_value(args)
#define self_get_vcname(args...) xfce_mixer_control_get_vcname(args)
#define self_set_vcname(args...) xfce_mixer_control_set_vcname(args)
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static gchar * (* const self_calc_sanename) (XfceMixerControl * self) = xfce_mixer_control_calc_sanename;
static void (* const self_vcname_changed) (XfceMixerControl * self) = xfce_mixer_control_vcname_changed;
static void (* const self_value_changed) (XfceMixerControl * self) = xfce_mixer_control_value_changed;
static void (* const self_location_changed) (XfceMixerControl * self) = xfce_mixer_control_location_changed;
static gint (* const self_calc_num_value) (XfceMixerControl * self) = xfce_mixer_control_calc_num_value;
static GtkWidget * (* const self_new) (void) = xfce_mixer_control_new;
static gint (* const self_get_orderno) (XfceMixerControl * self) = xfce_mixer_control_get_orderno;
static void (* const self_set_orderno) (XfceMixerControl * self, gint val) = xfce_mixer_control_set_orderno;
static gchar * (* const self_get_location) (XfceMixerControl * self) = xfce_mixer_control_get_location;
static void (* const self_set_location) (XfceMixerControl * self, gchar * val) = xfce_mixer_control_set_location;
static gchar * (* const self_get_value) (XfceMixerControl * self) = xfce_mixer_control_get_value;
static void (* const self_set_value) (XfceMixerControl * self, gchar * val) = xfce_mixer_control_set_value;
static gchar * (* const self_get_vcname) (XfceMixerControl * self) = xfce_mixer_control_get_vcname;
static void (* const self_set_vcname) (XfceMixerControl * self, gchar * val) = xfce_mixer_control_set_vcname;

GType
xfce_mixer_control_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerControlClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_control_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerControl),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_control_init,
		};

		type = g_type_register_static (GTK_TYPE_VBOX, "XfceMixerControl", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerControl *)g_object_new(xfce_mixer_control_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerControl * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerControl *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerControl *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerControl *)g_object_new_valist (xfce_mixer_control_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::finalize"
	XfceMixerControl *self = XFCE_MIXER_CONTROL (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 89 "mixer-control.gob"
	if(self->location) { ((*(void (*)(void *))g_free)) (self->location); self->location = NULL; }
#line 153 "xfce-mixer-control.c"
#line 122 "mixer-control.gob"
	if(self->vcname) { ((*(void (*)(void *))g_free)) (self->vcname); self->vcname = NULL; }
#line 156 "xfce-mixer-control.c"
#line 125 "mixer-control.gob"
	if(self->value) { ((*(void (*)(void *))g_free)) (self->value); self->value = NULL; }
#line 159 "xfce-mixer-control.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_control_class_init (XfceMixerControlClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::class_init"
	GObjectClass *g_object_class = (GObjectClass*) c;

	parent_class = g_type_class_ref (GTK_TYPE_VBOX);

	c->vcname_changed = NULL;
	c->value_changed = NULL;
	c->location_changed = NULL;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_int
		("orderno" /* name */,
		 "At which position the control is" /* nick */,
		 "This and location determine where the control is displayed" /* blurb */,
		 0 /* minimum */,
		 G_MAXINT /* maximum */,
		 0 /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_ORDERNO,
		param_spec);
	param_spec = g_param_spec_string
		("location" /* name */,
		 "Where this control is" /* nick */,
		 "This and orderno determine where the control is displayed" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_LOCATION,
		param_spec);
	param_spec = g_param_spec_string
		("value" /* name */,
		 "current value" /* nick */,
		 "The value shown in the control" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_VALUE,
		param_spec);
	param_spec = g_param_spec_string
		("vcname" /* name */,
		 "vc name" /* nick */,
		 "The name of the control in the vc driver" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_VCNAME,
		param_spec);
    }
	return;
	c = NULL;
	g_object_class = NULL;
}
#undef __GOB_FUNCTION__
#line 77 "mixer-control.gob"
static void 
xfce_mixer_control_init (XfceMixerControl * self)
#line 229 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::init"
#line 84 "mixer-control.gob"
	self->location = NULL;
#line 234 "xfce-mixer-control.c"
#line 84 "mixer-control.gob"
	self->orderno = 0;
#line 237 "xfce-mixer-control.c"
#line 117 "mixer-control.gob"
	self->vcname = NULL;
#line 240 "xfce-mixer-control.c"
#line 117 "mixer-control.gob"
	self->value = NULL;
#line 243 "xfce-mixer-control.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL,
	GParamSpec *pspec)
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_property"
{
	XfceMixerControl *self;

	self = XFCE_MIXER_CONTROL (object);

	switch (property_id) {
	case PROP_ORDERNO:
		{
#line 97 "mixer-control.gob"

			self->orderno = g_value_get_int (VAL);
			emit self_location_changed (self);
		
#line 268 "xfce-mixer-control.c"
		}
		break;
	case PROP_LOCATION:
		{
#line 109 "mixer-control.gob"

			if (self->location) {
				g_free (self->location);
				self->location = NULL;
			}
			self->location = g_strdup (g_value_get_string (VAL));
			emit self_location_changed (self);
		
#line 282 "xfce-mixer-control.c"
		}
		break;
	case PROP_VALUE:
		{
#line 131 "mixer-control.gob"

			if (self->value) {
				g_free (self->value);
				self->value = NULL;
			}

			self->value = g_strdup (g_value_get_string (VAL));
			emit self_value_changed (self);
		
#line 297 "xfce-mixer-control.c"
		}
		break;
	case PROP_VCNAME:
		{
#line 148 "mixer-control.gob"

			if (self->vcname) {
				g_free (self->vcname);
				self->vcname = NULL;
			}
			self->vcname = g_strdup (g_value_get_string (VAL));
			emit self_vcname_changed (self);
		
#line 311 "xfce-mixer-control.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
	return;
	self = NULL;
	VAL = NULL;
	pspec = NULL;
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL,
	GParamSpec *pspec)
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_property"
{
	XfceMixerControl *self;

	self = XFCE_MIXER_CONTROL (object);

	switch (property_id) {
	case PROP_ORDERNO:
		{
#line 101 "mixer-control.gob"

			g_value_set_int (VAL, self->orderno);
		
#line 348 "xfce-mixer-control.c"
		}
		break;
	case PROP_LOCATION:
		{
#line 117 "mixer-control.gob"

			g_value_set_string (VAL, self->location);
		
#line 357 "xfce-mixer-control.c"
		}
		break;
	case PROP_VALUE:
		{
#line 140 "mixer-control.gob"

			g_value_set_string (VAL, self->value);
		
#line 366 "xfce-mixer-control.c"
		}
		break;
	case PROP_VCNAME:
		{
#line 156 "mixer-control.gob"

			g_value_set_string (VAL, self->vcname);
		
#line 375 "xfce-mixer-control.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
	return;
	self = NULL;
	VAL = NULL;
	pspec = NULL;
}
#undef __GOB_FUNCTION__


/**
 * xfce_mixer_control_calc_sanename:
 *
 * Calculates a nice, displayable string for the control, to be used 
 * in labels etc.
 *
 * Returns: a new string
 **/
#line 30 "mixer-control.gob"
gchar * 
xfce_mixer_control_calc_sanename (XfceMixerControl * self)
#line 406 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::calc_sanename"
#line 30 "mixer-control.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 30 "mixer-control.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_CONTROL (self), (gchar * )0);
#line 413 "xfce-mixer-control.c"
{
#line 31 "mixer-control.gob"
	 /* make this pretty */
		gchar *tmp;

		if (!self->vcname)
			return g_strdup ("?");

		if (g_str_has_suffix (self->vcname, ",0")) {
			tmp = g_strdup (self->vcname);
			if (tmp && strlen(tmp) >= 2)
				tmp[strlen (tmp) - 2] = 0;

			return tmp;
		}

		return g_strdup_printf("%s", self->vcname);
	}}
#line 432 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 50 "mixer-control.gob"
void 
xfce_mixer_control_vcname_changed (XfceMixerControl * self)
#line 438 "xfce-mixer-control.c"
{
	XfceMixerControlClass *klass;
#line 50 "mixer-control.gob"
	g_return_if_fail (self != NULL);
#line 50 "mixer-control.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (self));
#line 445 "xfce-mixer-control.c"
	klass = XFCE_MIXER_CONTROL_GET_CLASS(self);

	if(klass->vcname_changed)
		(*klass->vcname_changed)(self);
}

#line 55 "mixer-control.gob"
void 
xfce_mixer_control_value_changed (XfceMixerControl * self)
#line 455 "xfce-mixer-control.c"
{
	XfceMixerControlClass *klass;
#line 55 "mixer-control.gob"
	g_return_if_fail (self != NULL);
#line 55 "mixer-control.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (self));
#line 462 "xfce-mixer-control.c"
	klass = XFCE_MIXER_CONTROL_GET_CLASS(self);

	if(klass->value_changed)
		(*klass->value_changed)(self);
}

#line 60 "mixer-control.gob"
void 
xfce_mixer_control_location_changed (XfceMixerControl * self)
#line 472 "xfce-mixer-control.c"
{
	XfceMixerControlClass *klass;
#line 60 "mixer-control.gob"
	g_return_if_fail (self != NULL);
#line 60 "mixer-control.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (self));
#line 479 "xfce-mixer-control.c"
	klass = XFCE_MIXER_CONTROL_GET_CLASS(self);

	if(klass->location_changed)
		(*klass->location_changed)(self);
}

#line 65 "mixer-control.gob"
gint 
xfce_mixer_control_calc_num_value (XfceMixerControl * self)
#line 489 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::calc_num_value"
#line 65 "mixer-control.gob"
	g_return_val_if_fail (self != NULL, (gint )0);
#line 65 "mixer-control.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_CONTROL (self), (gint )0);
#line 496 "xfce-mixer-control.c"
{
#line 66 "mixer-control.gob"
	
		gint v;

		if (self->value && sscanf (self->value, "%d", &v) >=1) {
		} else {
			v = 0;
		}

		return v;
	}}
#line 509 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__


#line 81 "mixer-control.gob"
GtkWidget * 
xfce_mixer_control_new (void)
#line 516 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::new"
{
#line 84 "mixer-control.gob"
	
		return (GtkWidget *)GET_NEW;
	}}
#line 524 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 101 "mixer-control.gob"
gint 
xfce_mixer_control_get_orderno (XfceMixerControl * self)
#line 530 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_orderno"
{
#line 91 "mixer-control.gob"
		gint val; g_object_get (G_OBJECT (self), "orderno", &val, NULL); return val;
}}
#line 537 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 97 "mixer-control.gob"
void 
xfce_mixer_control_set_orderno (XfceMixerControl * self, gint val)
#line 543 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_orderno"
{
#line 91 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "orderno", val, NULL);
}}
#line 550 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 117 "mixer-control.gob"
gchar * 
xfce_mixer_control_get_location (XfceMixerControl * self)
#line 556 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_location"
{
#line 105 "mixer-control.gob"
		gchar* val; g_object_get (G_OBJECT (self), "location", &val, NULL); return val;
}}
#line 563 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 109 "mixer-control.gob"
void 
xfce_mixer_control_set_location (XfceMixerControl * self, gchar * val)
#line 569 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_location"
{
#line 105 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "location", val, NULL);
}}
#line 576 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 140 "mixer-control.gob"
gchar * 
xfce_mixer_control_get_value (XfceMixerControl * self)
#line 582 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_value"
{
#line 126 "mixer-control.gob"
		gchar* val; g_object_get (G_OBJECT (self), "value", &val, NULL); return val;
}}
#line 589 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 131 "mixer-control.gob"
void 
xfce_mixer_control_set_value (XfceMixerControl * self, gchar * val)
#line 595 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_value"
{
#line 126 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "value", val, NULL);
}}
#line 602 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 156 "mixer-control.gob"
gchar * 
xfce_mixer_control_get_vcname (XfceMixerControl * self)
#line 608 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_vcname"
{
#line 144 "mixer-control.gob"
		gchar* val; g_object_get (G_OBJECT (self), "vcname", &val, NULL); return val;
}}
#line 615 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 148 "mixer-control.gob"
void 
xfce_mixer_control_set_vcname (XfceMixerControl * self, gchar * val)
#line 621 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_vcname"
{
#line 144 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "vcname", val, NULL);
}}
#line 628 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_control_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_calc_sanename)();
	((void (*)(void))self_vcname_changed)();
	((void (*)(void))self_value_changed)();
	((void (*)(void))self_location_changed)();
	((void (*)(void))self_calc_num_value)();
	((void (*)(void))self_new)();
	((void (*)(void))self_get_orderno)();
	((void (*)(void))self_set_orderno)();
	((void (*)(void))self_get_location)();
	((void (*)(void))self_set_location)();
	((void (*)(void))self_get_value)();
	((void (*)(void))self_set_value)();
	((void (*)(void))self_get_vcname)();
	((void (*)(void))self_set_vcname)();
	___xfce_mixer_control_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */

