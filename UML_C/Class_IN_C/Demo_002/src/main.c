#include "org/pvv/hakonhal/utils/BStack.h"
#define BStack org_pvv_hakonhal_utils_BStack
#include "org/somewhere/someone/Stack.h"
#define ElementI org_somewhere_someone_Stack_ElementI
#define Stack org_somewhere_someone_Stack
#include <stddef.h>
#include <stdio.h>
struct Integer
{
    struct ElementI ElementI;
    int value;
    void (*print)(struct Integer *this, const char *id);
};
static void print(struct Integer *this, const char *id)
{
    printf("%s: %d\n", id, this->value);
}
static struct Integer new(int value)
{
    return (struct Integer){
        .ElementI = {},
        .value = value,
        .print = &print,
    };
}
static const struct
{
    struct Integer (*new)(int value);
} Integer = {.new = &new};
int main(void)
{
    struct BStack stack = BStack.new();
    struct Integer i = Integer.new(10), j = Integer.new(20);
    struct Integer *ptr;

    stack.Stack.push(&stack.Stack, &i.ElementI);
    stack.Stack.push(&stack.Stack, &j.ElementI);
    ptr = (void *)stack.Stack.pop(&stack.Stack) - offsetof(struct Integer, ElementI);
    ptr->print(ptr, "j");
    ptr = ((void *)stack.Stack.pop(&stack.Stack)) - offsetof(struct Integer, ElementI);
    ptr->print(ptr, "i");
    printf("%s\n", "Will now try to pop an empty stack");
    stack.Stack.pop(&stack.Stack);
    return 0;
}