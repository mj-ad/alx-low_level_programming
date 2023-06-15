#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len2 = 0;
	unsigned int len1 = 0;
	unsigned int i;
	unsigned int j = 0;

	while (s2[len2])
	{
		len2++;
	}
	while (s1[len1])
	{
		len1++;
	}
	s = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	if (n < len2)
	{
		for (j = 0; j < n; j++, i++)
		{
			s[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < len2; j++, i++)
		{
			s[i] = s2[j];
		}
	}
	return (s);
}
