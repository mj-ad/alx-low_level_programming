#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - searches an integer
 *@array: array
 *@size: size of array
 *@cmp: function pointer
 *
 *Return: -1 if no elements match
 *        -1 if size zero orless
 *         index of of the first elemet for cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
