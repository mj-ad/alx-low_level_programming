#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -15 , 15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	if (*s1 == *s2)
		return (0);
	else if (*s1 < *s2)
		return (-15);
	else
		return (15);
}
