#ifndef _HUMAN_H_
#define _HUMAN_H_

typedef struct human {
    int age;
    char sex;
} Human_t;

typedef struct person{
    Human_t human;
    char *name;
} Person_t;
extern Person_t* Create_Person(int age, char sex, char *name);
#endif