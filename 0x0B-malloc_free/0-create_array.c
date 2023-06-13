#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: character
 *
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			s[i] = c;
		return (s);
	}
}
