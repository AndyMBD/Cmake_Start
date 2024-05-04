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

extern void set_age(Human *p, int age);
extern int get_age(Human *p);
extern void set_sex(Human *p, char sex);
extern char get_sex(Human *p);
// extern struct human_t Human;
#endif

