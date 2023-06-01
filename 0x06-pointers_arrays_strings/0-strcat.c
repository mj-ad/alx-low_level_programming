#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}

	for (i = len1, j = 0; i < len1 + len2; i++, j++)
	{
		dest[i] = src[j];
		dest[i + 1] = '\0';
	}
	return (dest);
}
