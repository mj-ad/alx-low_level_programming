#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (a == '2' && b >= '4')
					{
						break;
					}
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
