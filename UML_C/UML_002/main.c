#include <stdio.h>
#include <stdlib.h>
/* jicheng */
typedef struct human {
    int age;
    char sex;
} Human;

typedef struct person{
    Human human;
    char *name;
} Person;

Person* create_person(int age, char sex, char *name) {
    Person* cperson = (Person*) malloc(sizeof(Person));
    cperson->human.age = age;
    cperson->human.sex = sex;
    cperson->name = name;
    return cperson;
}

int main() {
    Person* cperson = create_person(18, 'w', "lucy");
    printf("(%d, %c) - name: %s\n", cperson->human.age, cperson->human.sex, cperson->name);
    free(cperson);
    return 0;
}