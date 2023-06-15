#include "main.h"

/**
 * malloc_checked - allocates memmory using malloc
 * @b: size
 * Return: null or 98
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = (void *)malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
