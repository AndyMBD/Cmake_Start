#ifndef TMDQueue_H
#define TMDQueue_H
/*## auto_generated */
#include "stdio.h"
#include "ECGPkg.h"
typedef struct _TMDQueue TMDQueue;
/*
This queue is meant to operate as a "leaky" queue. In this queue, data are never removed per
se, but are instead overwritten when the buffer pointer wraps around. This allows for many
clients to read the same data from the queue. */
struct _TMDQueue
{
    int head;
    int size;
};
/* Constructors and destructors:*/
void TMDQueue_Init(TMDQueue *const me);
void TMDQueue_Cleanup(TMDQueue *const me);

/* Operations */
int TMDQueue_getNextIndex(TMDQueue *const me, int index);
boolean TMDQueue_isEmpty(TMDQueue *const me);
struct TimeMarkedData TMDQueue_remove(TMDQueue *const me, int index);
int TMDQueue_getBuffer(const TMDQueue *const me);
TMDQueue *TMDQueue_Create(void);
void TMDQueue_Destroy(TMDQueue *const me);
#endif