#include "main.h"
/**
 * print_alphabets - prints alphabet
 * @c: character printed
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_puthar(c);
	}
	_putchar('\n');
}
