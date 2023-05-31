#include "main.h"
/**
 * puts_half - prits the second half of a string
 * @str: string
 *
 * Return void
 */

void puts_half(char *str)
{
	int len = 0;
	int n;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (i = n - 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
