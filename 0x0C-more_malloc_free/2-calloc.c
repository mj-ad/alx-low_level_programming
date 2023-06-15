#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elements
 * @size: num of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;

	if (size == 0 || nmemb == 0)
		return NULL;
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	return (s);
}
