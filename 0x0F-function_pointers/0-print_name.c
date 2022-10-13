#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - prints name
 *@name: name of a person
 *@f: function pointer
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;
else
f(name);
}
