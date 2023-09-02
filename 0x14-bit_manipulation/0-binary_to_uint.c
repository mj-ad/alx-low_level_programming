#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: string of numbers
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	n = 0;

	if (b)
	{
		while (*b != '\0')
		{
			n <<= 1;
			i = *b;
			if (i == '1' || i == '0')
			{
				if (i == '1')
					n |= 0x0001;
				b++;
			}
			else
			{
				n = 0;
				break;
			}
		}
	}
	else
	{
		return (n);
	}
	return (n);
}
