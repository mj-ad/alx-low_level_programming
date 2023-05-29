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

	while (s[size] != '\0')
	{
		size++;
	}

	for (i = size; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
}
