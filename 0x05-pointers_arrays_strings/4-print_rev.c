#include "main.h"
/**
 * print_rev -  prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int size = 0;
	int i;

	while (s[size] != '\0')
	{
		size++;
	}

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
