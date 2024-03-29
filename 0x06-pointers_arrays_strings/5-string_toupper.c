#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: string
 *
 * Return: string with all uppercase characters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] ^ 32;
		}
		else
		{
			continue;
		}
	}
	return (s);
}
