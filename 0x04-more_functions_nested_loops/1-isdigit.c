#include "main.h"
/**
 * _isdigit -  checks for digit (0 - 9)
 * @c: the digit to be checked
 *
 * Return: 1 if is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
