#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "queue.h"
#include "cachedqueue.h"
void    Queue_Test();
void    cachedQueue_Test();

int main(void)
{
    
    Queue_Test();
    cachedQueue_Test();
    return EXIT_SUCCESS;
}
void Queue_Test()
{

    int j, k, h, t;
    /* test normal queue */
    Queue *myQ;
    myQ = Queue_Create();
    k = 1000;
    puts("*---------------------------------------*");
    for (j = 0; j < QUEUE_SIZE; j++)
    {
        h = myQ->head;
        myQ->insert(myQ, k);
        printf("inserting %d at position %d, size =%d\n", k--, h, myQ->getSize(myQ));
    };
    printf("Inserted %d elements\n", myQ->getSize(myQ));
    for (j = 0; j < QUEUE_SIZE; j++)
    {
        t = myQ->tail;
        k = myQ->remove(myQ);
        printf("REMOVING %d at position %d, size =%d\n", k, t, myQ->getSize(myQ));
    };
    printf("Last item removed = %d\n", k);
    printf("Current queue size %d\n", myQ->getSize(myQ));
    puts("Queue test program");
    puts("*---------------------------------------*");
}
void cachedQueue_Test()
{

    int j, k, h, t;
    /* test normal queue */
    // Queue *myQ;
    CachedQueue *myQ;
    myQ=CachedQueue_Create();
    // myQ = Queue_Create();
    k = 1000;
    puts("*---------------------------------------*");
    for (j = 0; j < QUEUE_SIZE; j++)
    {
        h = myQ->queue->head;
        myQ->insert(myQ, k);
        printf("inserting %d at position %d, size =%d\n", k--, h, myQ->getSize(myQ));
    };
    printf("Inserted %d elements\n", myQ->getSize(myQ));
    for (j = 0; j < QUEUE_SIZE; j++)
    {
        t = myQ->queue->tail;
        // myQ->
        k = myQ->remove(myQ);
        printf("REMOVING %d at position %d, size =%d\n", k, t, myQ->getSize(myQ));
    };
    printf("Last item removed = %d\n", k);
    printf("Current queue size %d\n", myQ->getSize(myQ));
    puts("Queue test program");
    puts("*---------------------------------------*");
}
