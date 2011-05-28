#ifndef AURORA_COMMONPSP_H
#define AURORA_COMMONPSP_H

#include <malloc.h>		//For memalign()
#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspdebug.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
 

// Exit callback
int exit_callback(int arg1, int arg2, void *common);

// Callback thread 
int CallbackThread(SceSize args, void *argp);

// Sets up the callback thread and returns its thread id
int SetupCallbacks(void);

void memCopy(void* inDest, void* inSrc, u32 inSize);

#ifdef __cplusplus
}
#endif

#endif
