#include "Human.h"
#include "stdlib.h"
Person_t* Create_Person(int age, char sex, char *name) {
    Person_t* cperson = (Person_t*) malloc(sizeof(Person_t));
    cperson->human.age = age;
    cperson->human.sex = sex;
    cperson->name = name;
    return cperson;
}