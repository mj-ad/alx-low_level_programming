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
	int len1 = 0;
	int len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc((len1 * sizeof(char)) + (len2) * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		s[i] = s2[j];
	return (s);
}
