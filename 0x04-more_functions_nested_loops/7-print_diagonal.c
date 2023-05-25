#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of '\'
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0)
				{
					continue;
				}
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
