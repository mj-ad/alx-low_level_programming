#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog: new dog
 *@name: variable name
 *@age: variable age
 *@owner: variables owner
 *
 *Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return new_dog;
}
