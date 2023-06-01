#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: poiter to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
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

	for (i = len1, j = 0; src[j] != '\0' && n > 0; j++, i++, n--)
	{
		dest[i] = src[j];
		dest[i + 1] = '\0';
	}
	return (dest);
}
