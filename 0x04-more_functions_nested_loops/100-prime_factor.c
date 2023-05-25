#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int div = 2;
	long int fact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			fac = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d", fac);
				break;
			}
		}
	}
	return (0);
}
