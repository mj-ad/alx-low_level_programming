#include "main.h"
/**
 * print_last_digit -  prints last digit
 * @n: integer
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last <  0)
	{
		return (last * -1);
	}
	return (last);
}
