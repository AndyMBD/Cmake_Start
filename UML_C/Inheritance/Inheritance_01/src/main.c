#include <stdio.h>
#include <stdlib.h>
#include "Human.h"
/* inheritance 继承*/

int main() {
    Person_t* cperson = Create_Person(18, 'w', "lucy");
    printf("(%d, %c) - name: %s\n", cperson->human.age, cperson->human.sex, cperson->name);
    free(cperson);
    return 0;
}