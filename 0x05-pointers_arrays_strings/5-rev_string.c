#include "main.h"
/**
 * rev_string -  prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int size = 0;
	int i;
	int b = 0;
	char temp;
	char *t = s;

	while (s[size] != '\0')
	{
		size++;
	}

	for (i = size; i > 0; i--)
	{
		temp = t[i];
		s[a] = temp;
		a++;
	}
}
