/* Generated by GOB (v2.0.6) on Tue Feb 24 18:59:16 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 6

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "xfce-mixer-pxml.h"

#include "xfce-mixer-pxml-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 1 "mixer-pxml.gob"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#ifdef HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif
#include <stdio.h>
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#include <sys/types.h>



#line 43 "xfce-mixer-pxml.c"

#line 16 "mixer-pxml.gob"


#include <gtk/gtk.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#line 53 "xfce-mixer-pxml.c"
/* self casting macros */
#define SELF(x) XFCE_MIXER_PXML(x)
#define SELF_CONST(x) XFCE_MIXER_PXML_CONST(x)
#define IS_SELF(x) XFCE_IS_MIXER_PXML(x)
#define TYPE_SELF XFCE_TYPE_MIXER_PXML
#define SELF_CLASS(x) XFCE_MIXER_PXML_CLASS(x)

#define SELF_GET_CLASS(x) XFCE_MIXER_PXML_GET_CLASS(x)

/* self typedefs */
typedef XfceMixerPxml Self;
typedef XfceMixerPxmlClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void xfce_mixer_pxml_class_init (XfceMixerPxmlClass * c) G_GNUC_UNUSED;
static void xfce_mixer_pxml_init (XfceMixerPxml * self) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_FNAME
};

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define self_set_document(args...) xfce_mixer_pxml_set_document(args)
#define self_free_document(args...) xfce_mixer_pxml_free_document(args)
#define self_set_file(args...) xfce_mixer_pxml_set_file(args)
#define self_eat_children(args...) xfce_mixer_pxml_eat_children(args)
#define self_goto_next(args...) xfce_mixer_pxml_goto_next(args)
#define self_check_tag(args...) xfce_mixer_pxml_check_tag(args)
#define self_goto_child_tag(args...) xfce_mixer_pxml_goto_child_tag(args)
#define self_has_parent(args...) xfce_mixer_pxml_has_parent(args)
#define self_goto_parent(args...) xfce_mixer_pxml_goto_parent(args)
#define self_goto_children(args...) xfce_mixer_pxml_goto_children(args)
#define self_goto_root(args...) xfce_mixer_pxml_goto_root(args)
#define self_goto_node(args...) xfce_mixer_pxml_goto_node(args)
#define self_has_children(args...) xfce_mixer_pxml_has_children(args)
#define self_get_prop(args...) xfce_mixer_pxml_get_prop(args)
#define self_get_prop_int(args...) xfce_mixer_pxml_get_prop_int(args)
#define self_set_prop_int(args...) xfce_mixer_pxml_set_prop_int(args)
#define self_set_prop(args...) xfce_mixer_pxml_set_prop(args)
#define self_create_text_child(args...) xfce_mixer_pxml_create_text_child(args)
#define self_new(args...) xfce_mixer_pxml_new(args)
#define self_get_text_child(args...) xfce_mixer_pxml_get_text_child(args)
#endif /* __GNUC__ && !__STRICT_ANSI__ */

/* Short form pointers */
static void (* const self_set_document) (XfceMixerPxml * self, xmlDocPtr doc) = xfce_mixer_pxml_set_document;
static void (* const self_free_document) (XfceMixerPxml * self) = xfce_mixer_pxml_free_document;
static void (* const self_set_file) (XfceMixerPxml * self, gchar const * fnamen) = xfce_mixer_pxml_set_file;
static void (* const self_eat_children) (XfceMixerPxml * self, GList * exceptions) = xfce_mixer_pxml_eat_children;
static gboolean (* const self_goto_next) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_next;
static gboolean (* const self_check_tag) (XfceMixerPxml * self, gchar const * tagname) = xfce_mixer_pxml_check_tag;
static gboolean (* const self_goto_child_tag) (XfceMixerPxml * self, gchar const * tagname) = xfce_mixer_pxml_goto_child_tag;
static gboolean (* const self_has_parent) (XfceMixerPxml * self) = xfce_mixer_pxml_has_parent;
static void (* const self_goto_parent) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_parent;
static void (* const self_goto_children) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_children;
static void (* const self_goto_root) (XfceMixerPxml * self) = xfce_mixer_pxml_goto_root;
static void (* const self_goto_node) (XfceMixerPxml * self, xmlNodePtr nn) = xfce_mixer_pxml_goto_node;
static gboolean (* const self_has_children) (XfceMixerPxml * self) = xfce_mixer_pxml_has_children;
static gchar * (* const self_get_prop) (XfceMixerPxml * self, gchar const * pname) = xfce_mixer_pxml_get_prop;
static gboolean (* const self_get_prop_int) (XfceMixerPxml * self, gchar const * pname, gint * result) = xfce_mixer_pxml_get_prop_int;
static void (* const self_set_prop_int) (XfceMixerPxml * self, gchar const * pname, gint v) = xfce_mixer_pxml_set_prop_int;
static void (* const self_set_prop) (XfceMixerPxml * self, gchar const * pname, gchar const * value) = xfce_mixer_pxml_set_prop;
static xmlNodePtr (* const self_create_text_child) (XfceMixerPxml * self, gchar const * name, gchar const * opt_text) = xfce_mixer_pxml_create_text_child;
static XfceMixerPxml * (* const self_new) (gchar const * root) = xfce_mixer_pxml_new;
static gchar * (* const self_get_text_child) (XfceMixerPxml * self) = xfce_mixer_pxml_get_text_child;

GType
xfce_mixer_pxml_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (XfceMixerPxmlClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) xfce_mixer_pxml_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (XfceMixerPxml),
			0 /* n_preallocs */,
			(GInstanceInitFunc) xfce_mixer_pxml_init,
		};

		type = g_type_register_static (G_TYPE_OBJECT, "XfceMixerPxml", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((XfceMixerPxml *)g_object_new(xfce_mixer_pxml_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static XfceMixerPxml * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static XfceMixerPxml *
GET_NEW_VARG (const char *first, ...)
{
	XfceMixerPxml *ret;
	va_list ap;
	va_start (ap, first);
	ret = (XfceMixerPxml *)g_object_new_valist (xfce_mixer_pxml_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::finalize"
	XfceMixerPxml *self = XFCE_MIXER_PXML (obj_self);
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 26 "mixer-pxml.gob"
	if(self->root) { ((*(void (*)(void *))g_free)) (self->root); self->root = NULL; }
#line 178 "xfce-mixer-pxml.c"
#define fname (self->fname)
#define VAR fname
	{
#line 31 "mixer-pxml.gob"
	
			self_set_file (self, NULL);
		}
#line 186 "xfce-mixer-pxml.c"
	memset(&fname, 0, sizeof(fname));
#undef VAR
#undef fname
#define document (self->document)
#define VAR document
	{
#line 37 "mixer-pxml.gob"
	
			self_free_document (self);
		}
#line 197 "xfce-mixer-pxml.c"
	memset(&document, 0, sizeof(document));
#undef VAR
#undef document
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void 
xfce_mixer_pxml_class_init (XfceMixerPxmlClass * c)
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::class_init"
	GObjectClass *g_object_class = (GObjectClass*) c;

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_string
		("fname" /* name */,
		 "File name and path" /* nick */,
		 "Filename and path to use, if any" /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_FNAME,
		param_spec);
    }
	return;
	c = NULL;
	g_object_class = NULL;
}
#undef __GOB_FUNCTION__
#line 124 "mixer-pxml.gob"
static void 
xfce_mixer_pxml_init (XfceMixerPxml * self)
#line 238 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::init"
#line 16 "mixer-pxml.gob"
	self->root = NULL;
#line 243 "xfce-mixer-pxml.c"
#line 16 "mixer-pxml.gob"
	self->foreignDoc = TRUE;
#line 246 "xfce-mixer-pxml.c"
#line 16 "mixer-pxml.gob"
	self->fname = NULL;
#line 249 "xfce-mixer-pxml.c"
#line 31 "mixer-pxml.gob"
	self->document = NULL;
#line 252 "xfce-mixer-pxml.c"
#line 48 "mixer-pxml.gob"
	self->node = NULL;
#line 255 "xfce-mixer-pxml.c"
	return;
	self = NULL;
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL,
	GParamSpec *pspec)
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::set_property"
{
	XfceMixerPxml *self;

	self = XFCE_MIXER_PXML (object);

	switch (property_id) {
	case PROP_FNAME:
		{
#line 48 "mixer-pxml.gob"

		self_set_file (self, g_value_get_string (VAL));
	
#line 279 "xfce-mixer-pxml.c"
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
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::get_property"
{
	XfceMixerPxml *self;

	self = XFCE_MIXER_PXML (object);

	switch (property_id) {
	case PROP_FNAME:
		{
#line 45 "mixer-pxml.gob"

		g_value_set_string (VAL, self->fname);
	
#line 316 "xfce-mixer-pxml.c"
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


#line 54 "mixer-pxml.gob"
void 
xfce_mixer_pxml_set_document (XfceMixerPxml * self, xmlDocPtr doc)
#line 339 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::set_document"
#line 54 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 54 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 346 "xfce-mixer-pxml.c"
{
#line 55 "mixer-pxml.gob"
	
		self->foreignDoc = TRUE;
		self->document = doc;
	}}
#line 353 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 60 "mixer-pxml.gob"
void 
xfce_mixer_pxml_free_document (XfceMixerPxml * self)
#line 359 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::free_document"
#line 60 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 60 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 366 "xfce-mixer-pxml.c"
{
#line 61 "mixer-pxml.gob"
	
		if (!self->foreignDoc && self->document) {
			xmlFreeDoc (self->document);
		}
		self->document = NULL;
	}}
#line 375 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 68 "mixer-pxml.gob"
void 
xfce_mixer_pxml_set_file (XfceMixerPxml * self, gchar const * fnamen)
#line 381 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::set_file"
#line 68 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 68 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 388 "xfce-mixer-pxml.c"
{
#line 69 "mixer-pxml.gob"
	
		gchar *dir;
		self->node = NULL;

		if (self->fname && self->document) {
			/* store blahblah if required */
			xmlSaveFormatFile (self->fname, self->document, 1);
			xmlFreeDoc (self->document);
			self->document = NULL;

			g_free (self->fname);
			self->fname = NULL;
		}

		if (fnamen) {
			self->fname = g_strdup (fnamen);
			if (!self->fname) {
				/* eeek TODO exception */
			}

			if (g_file_test (self->fname, G_FILE_TEST_EXISTS)) {
				/* TODO backup */
				self->document = xmlParseFile (self->fname);
				self->foreignDoc = FALSE;
			} else {
				/* create directory */
				dir = g_path_get_dirname (self->fname);
				if (dir && !g_file_test (dir, G_FILE_TEST_IS_DIR))
					mkdir (dir, S_IRWXU | S_IRGRP 
					| S_IXGRP | S_IROTH | S_IXOTH);

				if (dir)
					g_free (dir);
			}

			/* create document etc */

			if (!self->document && self->root) {
				self->document = xmlNewDoc ("1.0");
				self->document->children = xmlNewDocRawNode (self->document, NULL, self->root, NULL);
				self->foreignDoc = FALSE;
				xmlDocSetRootElement (self->document, self->document->children);
			}

			if (!self->document)
				return;

			self_goto_root (self);
			if (!self->node) { /* no root */
				xmlFreeDoc (self->document);
				self->document = NULL;
			}
		}
	}}
#line 445 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__


#line 128 "mixer-pxml.gob"
void 
xfce_mixer_pxml_eat_children (XfceMixerPxml * self, GList * exceptions)
#line 452 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::eat_children"
#line 128 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 128 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 459 "xfce-mixer-pxml.c"
{
#line 129 "mixer-pxml.gob"
	
		xmlNodePtr nodex;
		xmlNodePtr nnodex;
		GList *g;
		gchar *tagname;
		gboolean found;
		/* todo */
		if (!self->node)
			return;

		nodex = self->node->children;
		if (!nodex)
			return;

		while (nodex) {
			nnodex = nodex->next;

			/* if not nodex.tagname in exceptions:
				nodex.del()
			*/
			tagname = (gchar *)nodex->name;
			found = FALSE;
			g = exceptions;
			while (g) {
				if (g_str_equal ((gchar *)g->data, tagname)) {
					found = TRUE;
					break;
				}
				g = g_list_next (g);
			}

			if (!found) {
				/* delete node */
				xmlUnlinkNode (nodex);
				xmlFreeNode (nodex);
			}

			nodex = nnodex;
		}
	}}
#line 502 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 170 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_goto_next (XfceMixerPxml * self)
#line 508 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_next"
#line 170 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 170 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 515 "xfce-mixer-pxml.c"
{
#line 171 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		self->node = self->node->next;
		if (self->node)
			return TRUE;

		return FALSE;
	}}
#line 528 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 182 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_check_tag (XfceMixerPxml * self, gchar const * tagname)
#line 534 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::check_tag"
#line 182 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 182 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 541 "xfce-mixer-pxml.c"
{
#line 183 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		return (xmlStrEqual(self->node->name, (const xmlChar *)tagname));
	}}
#line 550 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 190 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_goto_child_tag (XfceMixerPxml * self, gchar const * tagname)
#line 556 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_child_tag"
#line 190 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 190 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 563 "xfce-mixer-pxml.c"
{
#line 191 "mixer-pxml.gob"
	
		xmlNodePtr nodex;
		if (!self->node)
			return FALSE;

		nodex = self->node->children;
		while (nodex) {
			if (xmlStrEqual(nodex->name, (const xmlChar *)tagname)) {
				self->node = nodex;
				return TRUE;
			}
			nodex = nodex->next;
		}

		return FALSE;
	}}
#line 582 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 208 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_has_parent (XfceMixerPxml * self)
#line 588 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::has_parent"
#line 208 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 208 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 595 "xfce-mixer-pxml.c"
{
#line 209 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		return (self->node->parent != NULL);
	}}
#line 604 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 216 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_parent (XfceMixerPxml * self)
#line 610 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_parent"
#line 216 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 216 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 617 "xfce-mixer-pxml.c"
{
#line 217 "mixer-pxml.gob"
	
		if (!self->node)
			return;

		self->node = self->node->parent;
	}}
#line 626 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 224 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_children (XfceMixerPxml * self)
#line 632 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_children"
#line 224 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 224 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 639 "xfce-mixer-pxml.c"
{
#line 225 "mixer-pxml.gob"
	
		if (!self->node)
			return;

		self->node = self->node->children;
	}}
#line 648 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 232 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_root (XfceMixerPxml * self)
#line 654 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_root"
#line 232 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 232 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 661 "xfce-mixer-pxml.c"
{
#line 233 "mixer-pxml.gob"
	
		if (!self->document)
			return;

		self->node = xmlDocGetRootElement (self->document);

		if (self->root && !self_check_tag (self, self->root)) {
			self->node = NULL;
		}
	}}
#line 674 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 244 "mixer-pxml.gob"
void 
xfce_mixer_pxml_goto_node (XfceMixerPxml * self, xmlNodePtr nn)
#line 680 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::goto_node"
#line 244 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 244 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 687 "xfce-mixer-pxml.c"
{
#line 245 "mixer-pxml.gob"
	
		self->node = nn;
	}}
#line 693 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 249 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_has_children (XfceMixerPxml * self)
#line 699 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::has_children"
#line 249 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 249 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 706 "xfce-mixer-pxml.c"
{
#line 250 "mixer-pxml.gob"
	
		if (!self->node)
			return FALSE;

		return (self->node->children != NULL);
	}}
#line 715 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 257 "mixer-pxml.gob"
gchar * 
xfce_mixer_pxml_get_prop (XfceMixerPxml * self, gchar const * pname)
#line 721 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::get_prop"
#line 257 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 257 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gchar * )0);
#line 728 "xfce-mixer-pxml.c"
{
#line 258 "mixer-pxml.gob"
	
		return xmlGetProp (self->node, pname);
	}}
#line 734 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 262 "mixer-pxml.gob"
gboolean 
xfce_mixer_pxml_get_prop_int (XfceMixerPxml * self, gchar const * pname, gint * result)
#line 740 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::get_prop_int"
#line 262 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 262 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gboolean )0);
#line 747 "xfce-mixer-pxml.c"
{
#line 263 "mixer-pxml.gob"
	
		gchar *s;
		gchar *endptr;
		gboolean b;
		s = self_get_prop (self, pname);
		if (!s)
			return FALSE;

		b = FALSE;
		endptr = NULL;
		*result = (gint)strtol (s, &endptr, 0);
		b = (endptr == NULL) || ((*endptr) == 0);

		g_free (s);
		return b;
	}}
#line 766 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 280 "mixer-pxml.gob"
void 
xfce_mixer_pxml_set_prop_int (XfceMixerPxml * self, gchar const * pname, gint v)
#line 772 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::set_prop_int"
#line 280 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 280 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 779 "xfce-mixer-pxml.c"
{
#line 281 "mixer-pxml.gob"
	
		gchar tmp[20];
		g_snprintf (tmp, 20, "%d", v);
		self_set_prop (self, pname, tmp);
	}}
#line 787 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 287 "mixer-pxml.gob"
void 
xfce_mixer_pxml_set_prop (XfceMixerPxml * self, gchar const * pname, gchar const * value)
#line 793 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::set_prop"
#line 287 "mixer-pxml.gob"
	g_return_if_fail (self != NULL);
#line 287 "mixer-pxml.gob"
	g_return_if_fail (XFCE_IS_MIXER_PXML (self));
#line 800 "xfce-mixer-pxml.c"
{
#line 288 "mixer-pxml.gob"
	
		xmlSetProp (self->node, pname, (const xmlChar *) value);
	}}
#line 806 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 292 "mixer-pxml.gob"
xmlNodePtr 
xfce_mixer_pxml_create_text_child (XfceMixerPxml * self, gchar const * name, gchar const * opt_text)
#line 812 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::create_text_child"
#line 292 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (xmlNodePtr )0);
#line 292 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (xmlNodePtr )0);
#line 819 "xfce-mixer-pxml.c"
{
#line 293 "mixer-pxml.gob"
	
		if (!self->node)
			return NULL;

		return xmlNewTextChild (self->node, NULL, (const xmlChar *)name, (const xmlChar *) opt_text);
	}}
#line 828 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 300 "mixer-pxml.gob"
XfceMixerPxml * 
xfce_mixer_pxml_new (gchar const * root)
#line 834 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::new"
{
#line 301 "mixer-pxml.gob"
	
		XfceMixerPxml *p;
		p = XFCE_MIXER_PXML (GET_NEW);
		if (root)
			p->root = g_strdup (root);
		return p;
	}}
#line 846 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__

#line 309 "mixer-pxml.gob"
gchar * 
xfce_mixer_pxml_get_text_child (XfceMixerPxml * self)
#line 852 "xfce-mixer-pxml.c"
{
#define __GOB_FUNCTION__ "Xfce:Mixer:Pxml::get_text_child"
#line 309 "mixer-pxml.gob"
	g_return_val_if_fail (self != NULL, (gchar * )0);
#line 309 "mixer-pxml.gob"
	g_return_val_if_fail (XFCE_IS_MIXER_PXML (self), (gchar * )0);
#line 859 "xfce-mixer-pxml.c"
{
#line 310 "mixer-pxml.gob"
	
		if (!self->node)
			return NULL;

		return xmlNodeListGetString(self->document, self->node->children, 1);
	}}
#line 868 "xfce-mixer-pxml.c"
#undef __GOB_FUNCTION__


#if (!defined __GNUC__) || (defined __GNUC__ && defined __STRICT_ANSI__)
/*REALLY BAD HACK
  This is to avoid unused warnings if you don't call
  some method.  I need to find a better way to do
  this, not needed in GCC since we use some gcc
  extentions to make saner, faster code */
static void
___xfce_mixer_pxml_really_bad_hack_to_avoid_warnings(void)
{
	((void (*)(void))GET_NEW_VARG)();
	((void (*)(void))self_set_document)();
	((void (*)(void))self_free_document)();
	((void (*)(void))self_set_file)();
	((void (*)(void))self_eat_children)();
	((void (*)(void))self_goto_next)();
	((void (*)(void))self_check_tag)();
	((void (*)(void))self_goto_child_tag)();
	((void (*)(void))self_has_parent)();
	((void (*)(void))self_goto_parent)();
	((void (*)(void))self_goto_children)();
	((void (*)(void))self_goto_root)();
	((void (*)(void))self_goto_node)();
	((void (*)(void))self_has_children)();
	((void (*)(void))self_get_prop)();
	((void (*)(void))self_get_prop_int)();
	((void (*)(void))self_set_prop_int)();
	((void (*)(void))self_set_prop)();
	((void (*)(void))self_create_text_child)();
	((void (*)(void))self_new)();
	((void (*)(void))self_get_text_child)();
	___xfce_mixer_pxml_really_bad_hack_to_avoid_warnings();
}
#endif /* !__GNUC__ || (__GNUC__ && __STRICT_ANSI__) */
