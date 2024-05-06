# Encapsulate
## Encapsulate_01
* How to use the struct to define the object and related function
```C
typedef struct {
    int age;
    int weight;
} Animal;

// Create a function
void Animal_Creator(Animal *this, int age, int weight);

// Object function
int Animal_GetAge(Animal *this);
int Animal_GetWeight(Animal *this);
```
