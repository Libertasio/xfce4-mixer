/* Generated by GOB (v2.0.6) on Thu Jan  8 21:36:15 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "xfce-mixer-preferences.h"

#include "xfce-mixer-preferences-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 1 "mixer-preferences.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#line 33 "xfce-mixer-preferences.c"

#line 6 "mixer-preferences.gob"

#include <gtk/gtk.h>

#line 39 "xfce-mixer-preferences.c"

#line 12 "mixer-preferences.gob"

#include <libxfcegui4/xfce_framebox.h>
#include <libxfce4util/i18n.h>
#include "xfce-mixer-cache-vc.h"
#include "vc.h"
#include "helpers.inc"
#include "stringlist.inc"

#define MIXER_ROOT "Mixer"


#line 53 "xfce-mixer-preferences.c"

#line 23 "mixer-preferences.gob"

#include "xfce-mixer-pxml.h"

#line 59 "xfce-mixer-preferences.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_PREFERENCES(x)
#define SELF_CONST(x) XFCE_MIXER_PREFERENCES_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_PREFERENCES(x)
#define TYPE_SELF XFCE_TYPE_MIXER_PREFERENCES
#define SELF_CLASS(x) XFCE_MIXER_PREFERENCES_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_PREFERENCES_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerPreferences Self;
typedef XfceMixerPreferencesClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void xfce_mixer_preferences_class_init (XfceMixerPreferencesClass * c) G_GNUC_UNUSED;
static void xfce_mixer_preferences_init (XfceMixerPreferences * self) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_DEVICE,
	PROP_MASTER,
	PROP_EXECU,
	PROP_IN_TERMINAL,
	PROP_STARTUP_NF
};

/* pointer to the class of our parent */
static GtkObjectClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_new() xfce_mixer_preferences_new()
#define self_fill_probably_master(args...) xfce_mixer_preferences_fill_probably_master(args)
#define self_find_probably_master(args...) xfce_mixer_preferences_find_probably_master(args)
#define self_load(args...) xfce_mixer_preferences_load(args)
#define self_save(args...) xfce_mixer_preferences_save(args)
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static XfceMixerPreferences * (* const self_new) (void) = xfce_mixer_preferences_new;
static void (* const self_fill_probably_master) (XfceMixerPreferences * self) = xfce_mixer_preferences_fill_probably_master;
static gchar * (* const self_find_probably_master) (XfceMixerPreferences * self) = xfce_mixer_preferences_find_probably_master;
static void (* const self_load) (XfceMixerPreferences * self, xmlNodePtr parent) = xfce_mixer_preferences_load;
static void (* const self_save) (XfceMixerPreferences * self, xmlNodePtr parent) = xfce_mixer_preferences_save;

GType
xfce_mixer_preferences_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerPreferencesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_preferences_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerPreferences),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_preferences_init,
		};

		type = g_type_register_static (GTK_TYPE_OBJECT, "XfceMixerPreferences", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerPreferences *)g_object_new(xfce_mixer_preferences_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerPreferences * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerPreferences *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerPreferences *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerPreferences *)g_object_new_valist (xfce_mixer_preferences_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::dispose"
	XfceMixerPreferences *self = XFCE_MIXER_PREFERENCES (obj_self);
	if (G_OBJECT_CLASS (parent_class)->dispose) \
		(* G_OBJECT_CLASS (parent_class)->dispose) (obj_self);
#line 47 "mixer-preferences.gob"
	if(self->xml) { ((*(void (*)(void *))g_object_unref)) (self->xml); self->xml = NULL; }
#line 158 "xfce-mixer-preferences.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::finalize"
	XfceMixerPreferences *self = XFCE_MIXER_PREFERENCES (obj_self);
	gpointer priv = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 29 "mixer-preferences.gob"
	if(self->device) { ((*(void (*)(void *))g_free)) (self->device); self->device = NULL; }
#line 175 "xfce-mixer-preferences.c"
#line 32 "mixer-preferences.gob"
	if(self->_priv->master) { ((*(void (*)(void *))g_free)) (self->_priv->master); self->_priv->master = NULL; }
#line 178 "xfce-mixer-preferences.c"
#line 35 "mixer-preferences.gob"
	if(self->probably_master) { ((*(void (*)(void *))g_free)) (self->probably_master); self->probably_master = NULL; }
#line 181 "xfce-mixer-preferences.c"
#line 38 "mixer-preferences.gob"
	if(self->execu) { ((*(void (*)(void *))g_free)) (self->execu); self->execu = NULL; }
#line 184 "xfce-mixer-preferences.c"
#line 44 "mixer-preferences.gob"
	if(self->master_lst) { ((*(void (*)(void *))stringlist_free)) (self->master_lst); self->master_lst = NULL; }
#line 187 "xfce-mixer-preferences.c"
	g_free (priv);
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_preferences_class_init (XfceMixerPreferencesClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::class_init"
	GObjectClass *g_object_class = (GObjectClass*) c;

	parent_class = g_type_class_ref (GTK_TYPE_OBJECT);

	g_object_class->dispose = ___dispose;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_string
		("device" /* name */,
		 "The device to use for this item" /* nick */,
		 "The sound device to use for this item" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_DEVICE,
		param_spec);
	param_spec = g_param_spec_string
		("master" /* name */,
		 "master control name" /* nick */,
		 "The vcname of the master control for the plugin" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_MASTER,
		param_spec);
	param_spec = g_param_spec_string
		("execu" /* name */,
		 "program to start on click" /* nick */,
		 "The command line to start when the plugin is clicked" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_EXECU,
		param_spec);
	param_spec = g_param_spec_boolean
		("in_terminal" /* name */,
		 "start the program in a terminal" /* nick */,
		 "start the program in a terminal" /* blurb */,
		 FALSE /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_IN_TERMINAL,
		param_spec);
	param_spec = g_param_spec_boolean
		("startup_nf" /* name */,
		 "use startup notification" /* nick */,
		 "use startup notification" /* blurb */,
		 FALSE /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_STARTUP_NF,
		param_spec);
    }
	return;
	c = NULL;
	g_object_class = NULL;
}
#undef __GOB_FUNCTION__
#line 174 "mixer-preferences.gob"
static void 
xfce_mixer_preferences_init (XfceMixerPreferences * self)
#line 263 "xfce-mixer-preferences.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::init"
	self->_priv = g_new0 (XfceMixerPreferencesPrivate, 1);
#line 23 "mixer-preferences.gob"
	self->device = NULL;
#line 269 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->_priv->master = NULL;
#line 272 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->probably_master = NULL;
#line 275 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->execu = NULL;
#line 278 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->in_terminal = FALSE;
#line 281 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->startup_nf = FALSE;
#line 284 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->master_lst = NULL;
#line 287 "xfce-mixer-preferences.c"
#line 23 "mixer-preferences.gob"
	self->xml = NULL;
#line 290 "xfce-mixer-preferences.c"
 {
#line 175 "mixer-preferences.gob"

		self->xml = XFCE_MIXER_PXML (xfce_mixer_pxml_new (MIXER_ROOT));
		self_fill_probably_master (self);
	
#line 297 "xfce-mixer-preferences.c"
 }
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL,
	GParamSpec *pspec)
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::set_property"
{
	XfceMixerPreferences *self;

	self = XFCE_MIXER_PREFERENCES (object);

	switch (property_id) {
	case PROP_DEVICE:
		{
#line 52 "mixer-preferences.gob"

		if (self->device) {
			g_free (self->device);
			self->device = NULL;
		}
		self->device = g_strdup (g_value_get_string (VAL));

		self_fill_probably_master (self);

		if (self->_priv->master && !xfce_mixer_cache_vc_valid (self->_priv->master)) {
			g_object_set (G_OBJECT (self), "master", NULL, NULL);
		}
	
#line 332 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_MASTER:
		{
#line 72 "mixer-preferences.gob"

		if (self->_priv->master) {
			g_free (self->_priv->master);
			self->_priv->master = NULL;
		}
		if (VAL)
			self->_priv->master = g_strdup (g_value_get_string (VAL));
		else
			self->_priv->master = NULL;
	
#line 348 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_EXECU:
		{
#line 92 "mixer-preferences.gob"

		if (self->execu) {
			g_free (self->execu);
			self->execu = NULL;
		}
		self->execu = g_strdup (g_value_get_string (VAL));
	
#line 361 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_IN_TERMINAL:
		{
#line 103 "mixer-preferences.gob"
self->in_terminal = g_value_get_boolean (VAL);
#line 368 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_STARTUP_NF:
		{
#line 107 "mixer-preferences.gob"
self->startup_nf = g_value_get_boolean (VAL);
#line 375 "xfce-mixer-preferences.c"
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
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::get_property"
{
	XfceMixerPreferences *self;

	self = XFCE_MIXER_PREFERENCES (object);

	switch (property_id) {
	case PROP_DEVICE:
		{
#line 65 "mixer-preferences.gob"

		g_value_set_string (VAL, self->device);
	
#line 412 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_MASTER:
		{
#line 82 "mixer-preferences.gob"

		if (!self->_priv->master)
			g_value_set_string (VAL, self->probably_master);
		else
			g_value_set_string (VAL, self->_priv->master);
	
#line 424 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_EXECU:
		{
#line 99 "mixer-preferences.gob"

		g_value_set_string (VAL, self->execu);
	
#line 433 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_IN_TERMINAL:
		{
#line 103 "mixer-preferences.gob"
g_value_set_boolean (VAL, self->in_terminal);
#line 440 "xfce-mixer-preferences.c"
		}
		break;
	case PROP_STARTUP_NF:
		{
#line 107 "mixer-preferences.gob"
g_value_set_boolean (VAL, self->startup_nf);
#line 447 "xfce-mixer-preferences.c"
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


#line 111 "mixer-preferences.gob"
XfceMixerPreferences * 
xfce_mixer_preferences_new (void)
#line 470 "xfce-mixer-preferences.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::new"
{
#line 112 "mixer-preferences.gob"
	
		return XFCE_MIXER_PREFERENCES (GET_NEW);
	}}
#line 478 "xfce-mixer-preferences.c"
#undef __GOB_FUNCTION__

#line 116 "mixer-preferences.gob"
void 
xfce_mixer_preferences_fill_probably_master (XfceMixerPreferences * self)
#line 484 "xfce-mixer-preferences.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::fill_probably_master"
#line 116 "mixer-preferences.gob"
	g_return_if_fail (self != NULL);
#line 116 "mixer-preferences.gob"
	g_return_if_fail (XFCE_IS_MIXER_PREFERENCES (self));
#line 491 "xfce-mixer-preferences.c"
{
#line 117 "mixer-preferences.gob"
	
		if (self->probably_master) {
			g_free (self->probably_master);
			self->probably_master = NULL;
		}
		if (self->master_lst) {
			stringlist_free (self->master_lst);
			self->master_lst = NULL;
		}
		xfce_mixer_cache_vc_foreach (master_enum_cb, &self->master_lst);

		self->probably_master = self_find_probably_master (self);
	}}
#line 507 "xfce-mixer-preferences.c"
#undef __GOB_FUNCTION__

#line 131 "mixer-preferences.gob"
gchar * 
xfce_mixer_preferences_find_probably_master (XfceMixerPreferences * self)
#line 513 "xfce-mixer-preferences.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::find_probably_master"
#line 131 "mixer-preferences.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 131 "mixer-preferences.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PREFERENCES (self), (gchar * )0);
#line 520 "xfce-mixer-preferences.c"
{
#line 132 "mixer-preferences.gob"
	
		/* search om, find "Master", return index or -1 */
		gchar *r_s;
		gchar *master_s;
		gchar *master1_s;
		gchar *pcm_s;
		GList *g;
		gchar *s;
		master_s = NULL;
		master1_s = NULL;
		pcm_s = NULL;
		r_s = NULL;

		g = self->master_lst;
		while (g) {
			s = (gchar *)g->data;
			if (s) {
				if (g_str_has_prefix (s, "Master,")) master_s = s;
				else if (g_str_has_prefix (s, "Master")) {
					if (!master1_s) 
						master1_s = s;
				}
				else if (g_str_has_prefix (s, "PCM")) {
					pcm_s = s;
				}
			}
			g = g_list_next (g);
		}

		if (master_s)
			r_s = master_s;
		else if (master1_s)
			r_s = master1_s;
		else if (pcm_s)
			r_s = pcm_s;

		if (!r_s)
			return NULL;

		return g_strdup (r_s);
	}}
#line 564 "xfce-mixer-preferences.c"
#undef __GOB_FUNCTION__


#line 180 "mixer-preferences.gob"
void 
xfce_mixer_preferences_load (XfceMixerPreferences * self, xmlNodePtr parent)
#line 571 "xfce-mixer-preferences.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::load"
#line 180 "mixer-preferences.gob"
	g_return_if_fail (self != NULL);
#line 180 "mixer-preferences.gob"
	g_return_if_fail (XFCE_IS_MIXER_PREFERENCES (self));
#line 578 "xfce-mixer-preferences.c"
{
#line 181 "mixer-preferences.gob"
	
		gchar *value;
		gchar *tmp;
		gint n, n2;
		if (!parent)
			return;

		xfce_mixer_pxml_goto_node (self->xml, parent);
		if (!xfce_mixer_pxml_has_children (self->xml))
			return;

		xfce_mixer_pxml_goto_children (self->xml);

		if (!xfce_mixer_pxml_check_tag (self->xml, MIXER_ROOT))
			return;

		xfce_mixer_pxml_goto_children (self->xml);

		while (self->xml->node) {
			value = MYDATA (self->xml->node);
			if (xfce_mixer_pxml_check_tag (self->xml, "Device")) {
				g_object_set (G_OBJECT (self), "device", value, NULL);
			} else if (xfce_mixer_pxml_check_tag (self->xml, "Command")) {

				tmp = xfce_mixer_pxml_get_prop (self->xml, "term");
				n = 0;
				if (tmp) {
					n = atoi (tmp);
					g_free (tmp);
				}
				
				tmp = xfce_mixer_pxml_get_prop (self->xml, "sn");
				n2 = 0;
				if (tmp) {
					n2 = atoi (tmp);
					g_free (tmp);
				}
				
				g_object_set (G_OBJECT (self), 
					"execu", value, 
					"in_terminal", (gboolean) n,
					"startup_nf", (gboolean) n2,
				NULL);
			} else if (xfce_mixer_pxml_check_tag (self->xml, "Master")) {
				g_object_set (G_OBJECT (self), "master", value, NULL);
			}

			if (value) {
				g_free (value);
				value = NULL;
			}

			xfce_mixer_pxml_goto_next (self->xml);
		}

	}}
#line 637 "xfce-mixer-preferences.c"
#undef __GOB_FUNCTION__

#line 238 "mixer-preferences.gob"
void 
xfce_mixer_preferences_save (XfceMixerPreferences * self, xmlNodePtr parent)
#line 643 "xfce-mixer-preferences.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Preferences::save"
#line 238 "mixer-preferences.gob"
	g_return_if_fail (self != NULL);
#line 238 "mixer-preferences.gob"
	g_return_if_fail (XFCE_IS_MIXER_PREFERENCES (self));
#line 650 "xfce-mixer-preferences.c"
{
#line 239 "mixer-preferences.gob"
	
		xmlNodePtr root;
		xmlNodePtr cnode;
		char value[MAXSTRLEN + 1];

		xfce_mixer_pxml_goto_node (self->xml, parent);

		root = xfce_mixer_pxml_create_text_child (self->xml, MIXER_ROOT, NULL);
		xfce_mixer_pxml_goto_node (self->xml, root);
		/* "Controls" -> old */
		xfce_mixer_pxml_create_text_child (self->xml, "Device", self->device);
		cnode = xfce_mixer_pxml_create_text_child (self->xml, "Command", self->execu);
		xfce_mixer_pxml_goto_node (self->xml, cnode);

		g_snprintf (value, 2, "%d", self->in_terminal);
		xfce_mixer_pxml_set_prop (self->xml, "term", value);

		g_snprintf (value, 2, "%d", self->startup_nf);
		xfce_mixer_pxml_set_prop (self->xml, "sn", value);

		/* unused: prop "internal" */

		xfce_mixer_pxml_goto_node (self->xml, root);

		xfce_mixer_pxml_create_text_child (self->xml, "Master", self->_priv->master);
	}}
#line 679 "xfce-mixer-preferences.c"
#undef __GOB_FUNCTION__


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_preferences_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_new)();
	((void (*)(void))self_fill_probably_master)();
	((void (*)(void))self_find_probably_master)();
	((void (*)(void))self_load)();
	((void (*)(void))self_save)();
	___xfce_mixer_preferences_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */

