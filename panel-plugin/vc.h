/*
 * Copyright (c) 2003 Danny Milosavljevic <danny_milo@yahoo.com>
 * Copyright (c) 2003 Benedikt Meurer <benedikt.meurer@unix-ag.uni-siegen.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __VC_H
#define __VC_H
#include <glib.h>

/* this is the volume changer stuff */

typedef struct {
        char *name;

	void (*set_device)(char const *dev);
	int (*reinit_device)(void);
        int (*get_master_volume)();
        void (*set_master_volume)(int v);
} volchanger_t;

void register_vc(volchanger_t *vc);
void unregister_vc(volchanger_t *vc);
void unregister_all(void);
void select_vc(char const *name);
void select_vc_direct(volchanger_t *vc);
volchanger_t *selected_vc();
volchanger_t **first_vc();
volchanger_t **next_vc(volchanger_t **);

#ifndef VC_PLUGIN
/* these operate on the selected_vc: */
int get_master_volume(void);
void set_master_volume(int v);
#else
#define REGISTER_VC_PLUGIN(a) \
static volchanger_t vc = { \
        name: #a, \
        set_device: set_device, \
        get_master_volume: get_master_volume, \
        set_master_volume: set_master_volume, \
        reinit_device: reinit_device \
}; \
\
int register_##a(void) \
{ \
	if (init()) { \
	        register_vc(&vc); \
	} \
	else { \
		g_warning("Init of \"%s\" failed", #a); \
	} \
        return 0; \
}
#endif

#endif /* ndef __VC_H */
