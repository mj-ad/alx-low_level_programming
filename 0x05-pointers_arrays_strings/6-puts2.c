#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int size = 0;
	int i;

	while (str[size] != '\0')
	{
		size++;
	}

	for (i = 0; i > size - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
