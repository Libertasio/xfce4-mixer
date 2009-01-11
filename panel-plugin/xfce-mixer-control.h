/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>
#ifndef __XFCE_MIXER_CONTROL_H__
#define __XFCE_MIXER_CONTROL_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



#include <gtk/gtk.h>


/*
 * Type checking and casting macros
 */
#define XFCE_TYPE_MIXER_CONTROL	(xfce_mixer_control_get_type())
#define XFCE_MIXER_CONTROL(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), xfce_mixer_control_get_type(), XfceMixerControl)
#define XFCE_MIXER_CONTROL_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), xfce_mixer_control_get_type(), XfceMixerControl const)
#define XFCE_MIXER_CONTROL_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), xfce_mixer_control_get_type(), XfceMixerControlClass)
#define XFCE_IS_MIXER_CONTROL(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), xfce_mixer_control_get_type ())

#define XFCE_MIXER_CONTROL_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), xfce_mixer_control_get_type(), XfceMixerControlClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_XFCE_MIXER_CONTROL__
#define __TYPEDEF_XFCE_MIXER_CONTROL__
typedef struct _XfceMixerControl XfceMixerControl;
#endif
struct _XfceMixerControl {
	GtkVBox __parent__;
	/*< private >*/
	gchar * location; /* protected */
	int orderno; /* protected */
	char * vcname; /* protected */
	char * value; /* protected */
};

/*
 * Class definition
 */
typedef struct _XfceMixerControlClass XfceMixerControlClass;
struct _XfceMixerControlClass {
	GtkVBoxClass __parent__;
	void (* vcname_changed) (XfceMixerControl * self);
	void (* value_changed) (XfceMixerControl * self);
	void (* location_changed) (XfceMixerControl * self);
};


/*
 * Public methods
 */
GType	xfce_mixer_control_get_type	(void);
gchar * 	xfce_mixer_control_calc_sanename	(XfceMixerControl * self);
void 	xfce_mixer_control_vcname_changed	(XfceMixerControl * self);
void 	xfce_mixer_control_value_changed	(XfceMixerControl * self);
void 	xfce_mixer_control_location_changed	(XfceMixerControl * self);
gint 	xfce_mixer_control_calc_num_value	(XfceMixerControl * self);
GtkWidget * 	xfce_mixer_control_new	(void);
gint 	xfce_mixer_control_get_orderno	(XfceMixerControl * self);
void 	xfce_mixer_control_set_orderno	(XfceMixerControl * self,
					gint val);
gchar * 	xfce_mixer_control_get_location	(XfceMixerControl * self);
void 	xfce_mixer_control_set_location	(XfceMixerControl * self,
					gchar * val);
gchar * 	xfce_mixer_control_get_value	(XfceMixerControl * self);
void 	xfce_mixer_control_set_value	(XfceMixerControl * self,
					gchar * val);
gchar * 	xfce_mixer_control_get_vcname	(XfceMixerControl * self);
void 	xfce_mixer_control_set_vcname	(XfceMixerControl * self,
					gchar * val);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define XFCE_MIXER_CONTROL_PROP_ORDERNO(arg)    	"orderno", __extension__ ({gint z = (arg); z;})
#define XFCE_MIXER_CONTROL_GET_PROP_ORDERNO(arg)	"orderno", __extension__ ({gint *z = (arg); z;})
#define XFCE_MIXER_CONTROL_PROP_LOCATION(arg)    	"location", __extension__ ({gchar *z = (arg); z;})
#define XFCE_MIXER_CONTROL_GET_PROP_LOCATION(arg)	"location", __extension__ ({gchar **z = (arg); z;})
#define XFCE_MIXER_CONTROL_PROP_VALUE(arg)    	"value", __extension__ ({gchar *z = (arg); z;})
#define XFCE_MIXER_CONTROL_GET_PROP_VALUE(arg)	"value", __extension__ ({gchar **z = (arg); z;})
#define XFCE_MIXER_CONTROL_PROP_VCNAME(arg)    	"vcname", __extension__ ({gchar *z = (arg); z;})
#define XFCE_MIXER_CONTROL_GET_PROP_VCNAME(arg)	"vcname", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define XFCE_MIXER_CONTROL_PROP_ORDERNO(arg)    	"orderno",(gint )(arg)
#define XFCE_MIXER_CONTROL_GET_PROP_ORDERNO(arg)	"orderno",(gint *)(arg)
#define XFCE_MIXER_CONTROL_PROP_LOCATION(arg)    	"location",(gchar *)(arg)
#define XFCE_MIXER_CONTROL_GET_PROP_LOCATION(arg)	"location",(gchar **)(arg)
#define XFCE_MIXER_CONTROL_PROP_VALUE(arg)    	"value",(gchar *)(arg)
#define XFCE_MIXER_CONTROL_GET_PROP_VALUE(arg)	"value",(gchar **)(arg)
#define XFCE_MIXER_CONTROL_PROP_VCNAME(arg)    	"vcname",(gchar *)(arg)
#define XFCE_MIXER_CONTROL_GET_PROP_VCNAME(arg)	"vcname",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
