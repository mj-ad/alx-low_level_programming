#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int j, k = 0, t = 0;
	unsigned long int b = 0;
	int i;
	int s = 1;

	for (i = 31; i >= 0; i--)
	{
		j = n >> i;
		t = k;
		while (t > 0)
		{
			s = s * 10;
			t--;
		}
		j = j * s;
		b = b + j;
		k = k + 1;
	}
	printf("%lu", b);
}