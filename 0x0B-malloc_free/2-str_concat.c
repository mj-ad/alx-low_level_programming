#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0' || s2[len] != '\0')
		len++;
	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (j = 0; s2[i]; j++, i++)
		s[i] = s2[j];
	return (s);
}
