/* Generated by GOB (v2.0.9)   (do not edit directly) */

#ifndef __XFCE_MIXER_WINDOW_PRIVATE_H__
#define __XFCE_MIXER_WINDOW_PRIVATE_H__

#include "xfce-mixer-window.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



#include <gtk/gtk.h>
#include "xfce-mixer-view.h"
#include "xfce-mixer-profile.h"
#include "main.h"
#include "xfce-mixer-mcs-client.h"
#include "xfce_sizehook.h"

#line 7 "mixer-window.gob"
#line 23 "xfce-mixer-window-private.h"
void 	xfce_mixer_window_load_accelgroup	(XfceMixerWindow * self);
void 	xfce_mixer_window_save_accelgroup	(XfceMixerWindow * self);
void 	xfce_mixer_window_set_profile	(XfceMixerWindow * self, XfceMixerProfile * p);
void 	xfce_mixer_window_xml_goto_device	(XfceMixerWindow * self, XfceMixerPxml * xml);
void 	xfce_mixer_window_load_window_state	(XfceMixerWindow * self);
void 	xfce_mixer_window_save_window_state_cb	(XfceMixerWindow * self, t_window_state * s, GtkWindow * w);
void 	xfce_mixer_window_save_window_state	(XfceMixerWindow * self, t_window_state * s);
void 	xfce_mixer_window_mcs_changed_cb	(XfceMixerWindow * self, GtkWidget * widget);
void 	xfce_mixer_window_profiles_changed_cb	(XfceMixerWindow * self, GObject * profiles);
void 	xfce_mixer_window_view_profile_activate_cb	(XfceMixerWindow * self, GtkWidget * w);
void 	xfce_mixer_window_update_profiles_menu	(XfceMixerWindow * self);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
