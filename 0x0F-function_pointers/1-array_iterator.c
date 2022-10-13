#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - a functions that executes a function
 *@array: array
 *@size: size of array
 *@action: pointer to function
 *
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action == NULL)
return;
else
action(array[size]);
}
