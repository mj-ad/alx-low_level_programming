#include "main.h"
/**
 * print_alphabets_x10 - prints alphabet
 * @c: character printed
 * @i: iterate 10x
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_puthar(c);
		}
	_putchar('\n');
	}
}
