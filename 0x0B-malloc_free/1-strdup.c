#include "main.h"

/**
 * _strdup - copies a string and allocates same amount of memory
 * @str: string to be copied
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *s;

	while (str[i] != '\0')
	{
		i++;
	}
	s = (char *)malloc(i * sizeof(char));
	if (s == NULL || str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
