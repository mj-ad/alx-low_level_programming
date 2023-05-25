#include "main.h"
/**
 * more_numbers -  prints 0 -14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	char c;
	char d;

	for (i = 1; i <= 10; i++)
	{
		for (c = '0'; c <= '1'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				if (c == '1')
				{
					_putchar(c);
				}
				if ((c == '0') || (c == '1' && d <= '4'))
				{
					_putchar(d);
				}
				if (c == '1' && d > '3')
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
