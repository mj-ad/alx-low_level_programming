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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
