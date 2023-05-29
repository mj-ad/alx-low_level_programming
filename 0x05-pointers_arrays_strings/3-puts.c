#include "main.h"
/**
 * _puts - prints a sting to stdout
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int size = 0;
	int i;

	while (str[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
