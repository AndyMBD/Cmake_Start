#ifndef ORG_SOMEWHERE_SOMEONE_STACK_H
#define ORG_SOMEWHERE_SOMEONE_STACK_H

struct org_somewhere_someone_Stack_ElementI
{
};

#define ORG_SOMEWHERE_SOMEONE_STACK_SIZE 100

struct org_somewhere_someone_Stack
{

    void (*push)(struct org_somewhere_someone_Stack *this,
                 struct org_somewhere_someone_Stack_ElementI *element);

    struct org_somewhere_someone_Stack_ElementI *(*pop)(struct org_somewhere_someone_Stack *this);

    // protected:

    int count;

    struct org_somewhere_someone_Stack_ElementI *
        data[ORG_SOMEWHERE_SOMEONE_STACK_SIZE];
};

extern struct org_somewhere_someone_StackClass
{
    struct org_somewhere_someone_Stack (*new)(void);
} org_somewhere_someone_Stack;

#endif