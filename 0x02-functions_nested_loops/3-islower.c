#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: letter to check
 *
 * Return: 1 if is lower and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
