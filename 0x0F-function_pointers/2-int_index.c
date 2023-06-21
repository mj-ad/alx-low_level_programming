#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int count = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			continue;
		else
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (-1);
	else
		return (i);
}
