#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	int count = 0;
	int d;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			count++;
			j = i;
			break;
		}
		else
		{
			continue;
		}
	}
	if (count == 1)
	{
		for (d = 0; s[j] != '\0'; j++, d++)
		{
			t = s[j];
			s[d] = t;
		}
		return (s);
	}
	return ('\0');
}
