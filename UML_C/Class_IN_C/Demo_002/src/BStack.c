#include "org/pvv/hakonhal/utils/BStack.h"
#define BStack org_pvv_hakonhal_utils_BStack
#define BStackClass org_pvv_hakonhal_utils_BStackClass
#include "org/somewhere/someone/Stack.h"
#define ElementI org_somewhere_someone_Stack_ElementI
#define Stack org_somewhere_someone_Stack
#define STACK_SIZE ORG_SOMEWHERE_SOMEONE_STACK_SIZE
#include <stdio.h>
#include <stdlib.h>
static void (*base_push)(struct Stack *this, struct ElementI *element);
static void push(struct Stack *base, struct ElementI *element)
{
    if (base->count >= STACK_SIZE)
    {
        fprintf(stderr, "%s", "Stack overflow!\n");
        exit(1);
    }

    base_push(base, element);
}
static struct ElementI *(*base_pop)(struct Stack *this);
static struct ElementI *pop(struct Stack *base)
{
    if (base->count <= 0)
    {
        fprintf(stderr, "%s", "Stack underflow!\n");
        exit(1);
    }
    return base_pop(base);
}
static struct BStack new(void)
{
    struct BStack ret;
    ret.Stack = Stack.new();
    base_push = ret.Stack.push;
    ret.Stack.push = &push;
    base_pop = ret.Stack.pop;
    ret.Stack.pop = &pop;
    return ret;
}

const struct BStackClass BStack = {.new = &new};