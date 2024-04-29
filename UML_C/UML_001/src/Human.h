
#ifndef _HUMAN_H_
#define _HUMAN_H_

typedef struct human
{ 
    int age; 
    char sex; 
    void (*set_age)(struct human *p, int age);
    int (*get_age)(struct human *p);
    void (*set_sex)(struct human *p, char sex);
    char (*get_sex)(struct human *p);
}Human; 
// extern struct human_t Human;
#endif

