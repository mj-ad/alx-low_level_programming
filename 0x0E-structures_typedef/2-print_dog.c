#include "dog.h"
#include <stdio.h>

/**
 *print_dog - a function that prints a struct dog
 *@d: pointer
 */

void print_dog(struct dog *d)
{
char *name;
int age;
char *owner;
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %s\n", (d->age) ? d->age : "(nil)";
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)";
}
else
{
printf("(nil)");
}
}
