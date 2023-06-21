#include "function_pointers.h"
/**
 * array_iterator - iterates an array
 * @array: array
 * @size: size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; (size_t)i < size; i++)
		action(array[i]);
}
