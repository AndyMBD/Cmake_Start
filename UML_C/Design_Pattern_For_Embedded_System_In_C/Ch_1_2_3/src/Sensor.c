#include "Sensor.h"
void Sensor_Init(Sensor* const me) 
{
}
void Sensor_Cleanup(Sensor* const me) 
{
}
int Sensor_getFilterFrequency(const Sensor* const me) 
{
    return me->filterFrequency;
}
void Sensor_setFilterFrequency(Sensor* const me, int p_filterFrequency) 
{
    me->filterFrequency = p_filterFrequency;
}
int Sensor_getUpdateFrequency(const Sensor* const me) 
{
    
    return me->updateFrequency;
}
void Sensor_setUpdateFrequency(Sensor* const me, int p_updateFrequency) 
{
    me->updateFrequency = p_updateFrequency;
}
int Sensor_getValue(const Sensor* const me) 
{
    return me->value;
}
Sensor * Sensor_Create(void) 
{
    Sensor* me = (Sensor *) malloc(sizeof(Sensor));
    if(me!=NULL)
    {
        Sensor_Init(me);
    }
    return me;
}
void Sensor_Destroy(Sensor* const me) 
{
    if(me!=NULL)
    {
        Sensor_Cleanup(me);
    }
    free(me);
}
/* Dummy function with wrapper */
int acquireValue(Sensor *me) {
    int *r, *w; /* read and write addresses */
    int j;
    switch(me->whatKindOfInterface) /* Different kind of sensor */
    {
        case MEMORYMAPPED: /* sensor type 1 */
            w = (int*)WRITEADDR; /* address to write to sensor */
            *w = WRITEMASK; /* sensor command to force a read */
            for (j=0;j<100;j++) { /* wait loop */ };
            r = (int *)READADDR; /* address of returned value */
            me->value = *r;
        break;
        case PORTMAPPED:/* Sensor type 2 */
            me->value = inp(SENSORPORT);
            /* inp() is a compiler-specific port function */
        break;
    }; /* end switch */
    return me->value;
};