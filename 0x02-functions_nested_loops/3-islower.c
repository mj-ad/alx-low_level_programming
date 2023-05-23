#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: letter to check
 *
 * Return: 0 if is lower and 1 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (1);
}
