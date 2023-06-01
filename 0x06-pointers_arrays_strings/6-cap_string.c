#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == ',' ||
		    s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
		    s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
		{
			if (s[i] == 9)
			{
				s[i] = ' ';
			}
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] ^ 32;
			}
			else
			{
				continue;
			}
		}
	}
	return (s);
}
