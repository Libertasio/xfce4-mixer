/* Generated by GOB (v2.0.9) on Fri Oct 29 20:42:56 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 9

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

#line 1 "mixer-control.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#line 31 "xfce-mixer-control.c"

#line 8 "mixer-control.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <libxfce4util/libxfce4util.h>
#define emit 

#line 43 "xfce-mixer-control.c"

#line 18 "mixer-control.gob"

#include <gtk/gtk.h>

#line 49 "xfce-mixer-control.c"
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
#define self_calc_sanename xfce_mixer_control_calc_sanename
#define self_vcname_changed xfce_mixer_control_vcname_changed
#define self_value_changed xfce_mixer_control_value_changed
#define self_location_changed xfce_mixer_control_location_changed
#define self_calc_num_value xfce_mixer_control_calc_num_value
#define self_new xfce_mixer_control_new
#define self_get_orderno xfce_mixer_control_get_orderno
#define self_set_orderno xfce_mixer_control_set_orderno
#define self_get_location xfce_mixer_control_get_location
#define self_set_location xfce_mixer_control_set_location
#define self_get_value xfce_mixer_control_get_value
#define self_set_value xfce_mixer_control_set_value
#define self_get_vcname xfce_mixer_control_get_vcname
#define self_set_vcname xfce_mixer_control_set_vcname
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
			NULL
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
	XfceMixerControl *self  G_GNUC_UNUSED = XFCE_MIXER_CONTROL (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#define location (self->location)
#define VAR location
	{
#line 98 "mixer-control.gob"
	
			if (VAR) {
				g_free (VAR);
				VAR = NULL;
			}
		}
#line 155 "xfce-mixer-control.c"
	memset(&location, 0, sizeof(location));
#undef VAR
#undef location
#define vcname (self->vcname)
#define VAR vcname
	{
#line 137 "mixer-control.gob"
	
			if (VAR) {
				g_free (VAR);
				VAR = NULL;
			}
		}
#line 169 "xfce-mixer-control.c"
	memset(&vcname, 0, sizeof(vcname));
#undef VAR
#undef vcname
#define value (self->value)
#define VAR value
	{
#line 145 "mixer-control.gob"
	
			if (VAR) {
				g_free (VAR);
				VAR = NULL;
			}
		}
#line 183 "xfce-mixer-control.c"
	memset(&value, 0, sizeof(value));
#undef VAR
#undef value
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_control_class_init (XfceMixerControlClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

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
}
#undef __GOB_FUNCTION__
#line 86 "mixer-control.gob"
static void 
xfce_mixer_control_init (XfceMixerControl * self G_GNUC_UNUSED)
#line 251 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::init"
#line 93 "mixer-control.gob"
	self->location = NULL;
#line 256 "xfce-mixer-control.c"
#line 98 "mixer-control.gob"
	self->orderno = 0;
#line 259 "xfce-mixer-control.c"
#line 132 "mixer-control.gob"
	self->vcname = NULL;
#line 262 "xfce-mixer-control.c"
#line 137 "mixer-control.gob"
	self->value = NULL;
#line 265 "xfce-mixer-control.c"
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_property"
{
	XfceMixerControl *self G_GNUC_UNUSED;

	self = XFCE_MIXER_CONTROL (object);

	switch (property_id) {
	case PROP_ORDERNO:
		{
#line 112 "mixer-control.gob"

			self->orderno = g_value_get_int (VAL);
			emit self_location_changed (self);
		
#line 288 "xfce-mixer-control.c"
		}
		break;
	case PROP_LOCATION:
		{
#line 124 "mixer-control.gob"

			if (self->location) {
				g_free (self->location);
				self->location = NULL;
			}
			self->location = g_strdup (g_value_get_string (VAL));
			emit self_location_changed (self);
		
#line 302 "xfce-mixer-control.c"
		}
		break;
	case PROP_VALUE:
		{
#line 157 "mixer-control.gob"

			if (self->value) {
				g_free (self->value);
				self->value = NULL;
			}

			self->value = g_strdup (g_value_get_string (VAL));
			emit self_value_changed (self);
		
#line 317 "xfce-mixer-control.c"
		}
		break;
	case PROP_VCNAME:
		{
#line 174 "mixer-control.gob"

			if (self->vcname) {
				g_free (self->vcname);
				self->vcname = NULL;
			}
			self->vcname = g_strdup (g_value_get_string (VAL));
			emit self_vcname_changed (self);
		
#line 331 "xfce-mixer-control.c"
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
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_property"
{
	XfceMixerControl *self G_GNUC_UNUSED;

	self = XFCE_MIXER_CONTROL (object);

	switch (property_id) {
	case PROP_ORDERNO:
		{
#line 116 "mixer-control.gob"

			g_value_set_int (VAL, self->orderno);
		
#line 364 "xfce-mixer-control.c"
		}
		break;
	case PROP_LOCATION:
		{
#line 132 "mixer-control.gob"

			g_value_set_string (VAL, self->location);
		
#line 373 "xfce-mixer-control.c"
		}
		break;
	case PROP_VALUE:
		{
#line 166 "mixer-control.gob"

			g_value_set_string (VAL, self->value);
		
#line 382 "xfce-mixer-control.c"
		}
		break;
	case PROP_VCNAME:
		{
#line 182 "mixer-control.gob"

			g_value_set_string (VAL, self->vcname);
		
#line 391 "xfce-mixer-control.c"
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
#line 39 "mixer-control.gob"
gchar * 
xfce_mixer_control_calc_sanename (XfceMixerControl * self)
#line 418 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::calc_sanename"
#line 39 "mixer-control.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 39 "mixer-control.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_CONTROL (self), (gchar * )0);
#line 425 "xfce-mixer-control.c"
{
#line 40 "mixer-control.gob"
	 /* make this pretty */
		gchar *tmp;

		if (!self->vcname)
			return g_strdup ("?");

		if (g_str_has_suffix (self->vcname, ",0")) {
			tmp = g_strdup (_(self->vcname));
			if (tmp && strlen(tmp) >= 2)
				tmp[strlen (tmp) - 2] = 0;

			return tmp;
		}

		return g_strdup_printf("%s", _(self->vcname));
	}}
#line 444 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 59 "mixer-control.gob"
void 
xfce_mixer_control_vcname_changed (XfceMixerControl * self)
#line 450 "xfce-mixer-control.c"
{
	XfceMixerControlClass *klass;
#line 59 "mixer-control.gob"
	g_return_if_fail (self != NULL);
#line 59 "mixer-control.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (self));
#line 457 "xfce-mixer-control.c"
	klass = XFCE_MIXER_CONTROL_GET_CLASS(self);

	if(klass->vcname_changed)
		(*klass->vcname_changed)(self);
}

#line 64 "mixer-control.gob"
void 
xfce_mixer_control_value_changed (XfceMixerControl * self)
#line 467 "xfce-mixer-control.c"
{
	XfceMixerControlClass *klass;
#line 64 "mixer-control.gob"
	g_return_if_fail (self != NULL);
#line 64 "mixer-control.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (self));
#line 474 "xfce-mixer-control.c"
	klass = XFCE_MIXER_CONTROL_GET_CLASS(self);

	if(klass->value_changed)
		(*klass->value_changed)(self);
}

#line 69 "mixer-control.gob"
void 
xfce_mixer_control_location_changed (XfceMixerControl * self)
#line 484 "xfce-mixer-control.c"
{
	XfceMixerControlClass *klass;
#line 69 "mixer-control.gob"
	g_return_if_fail (self != NULL);
#line 69 "mixer-control.gob"
	g_return_if_fail (XFCE_IS_MIXER_CONTROL (self));
#line 491 "xfce-mixer-control.c"
	klass = XFCE_MIXER_CONTROL_GET_CLASS(self);

	if(klass->location_changed)
		(*klass->location_changed)(self);
}

#line 74 "mixer-control.gob"
gint 
xfce_mixer_control_calc_num_value (XfceMixerControl * self)
#line 501 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::calc_num_value"
#line 74 "mixer-control.gob"
	g_return_val_if_fail (self != NULL, (gint )0);
#line 74 "mixer-control.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_CONTROL (self), (gint )0);
#line 508 "xfce-mixer-control.c"
{
#line 75 "mixer-control.gob"
	
		gint v;

		if (self->value && sscanf (self->value, "%d", &v) >=1) {
		} else {
			v = 0;
		}

		return v;
	}}
#line 521 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__


#line 90 "mixer-control.gob"
GtkWidget * 
xfce_mixer_control_new (void)
#line 528 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::new"
{
#line 93 "mixer-control.gob"
	
		return (GtkWidget *)GET_NEW;
	}}
#line 536 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 116 "mixer-control.gob"
gint 
xfce_mixer_control_get_orderno (XfceMixerControl * self)
#line 542 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_orderno"
{
#line 106 "mixer-control.gob"
		gint val; g_object_get (G_OBJECT (self), "orderno", &val, NULL); return val;
}}
#line 549 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 112 "mixer-control.gob"
void 
xfce_mixer_control_set_orderno (XfceMixerControl * self, gint val)
#line 555 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_orderno"
{
#line 106 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "orderno", val, NULL);
}}
#line 562 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 132 "mixer-control.gob"
gchar * 
xfce_mixer_control_get_location (XfceMixerControl * self)
#line 568 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_location"
{
#line 120 "mixer-control.gob"
		gchar* val; g_object_get (G_OBJECT (self), "location", &val, NULL); return val;
}}
#line 575 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 124 "mixer-control.gob"
void 
xfce_mixer_control_set_location (XfceMixerControl * self, gchar * val)
#line 581 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_location"
{
#line 120 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "location", val, NULL);
}}
#line 588 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 166 "mixer-control.gob"
gchar * 
xfce_mixer_control_get_value (XfceMixerControl * self)
#line 594 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_value"
{
#line 152 "mixer-control.gob"
		gchar* val; g_object_get (G_OBJECT (self), "value", &val, NULL); return val;
}}
#line 601 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 157 "mixer-control.gob"
void 
xfce_mixer_control_set_value (XfceMixerControl * self, gchar * val)
#line 607 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_value"
{
#line 152 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "value", val, NULL);
}}
#line 614 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 182 "mixer-control.gob"
gchar * 
xfce_mixer_control_get_vcname (XfceMixerControl * self)
#line 620 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::get_vcname"
{
#line 170 "mixer-control.gob"
		gchar* val; g_object_get (G_OBJECT (self), "vcname", &val, NULL); return val;
}}
#line 627 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__

#line 174 "mixer-control.gob"
void 
xfce_mixer_control_set_vcname (XfceMixerControl * self, gchar * val)
#line 633 "xfce-mixer-control.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Control::set_vcname"
{
#line 170 "mixer-control.gob"
		g_object_set (G_OBJECT (self), "vcname", val, NULL);
}}
#line 640 "xfce-mixer-control.c"
#undef __GOB_FUNCTION__
