#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= size - i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
