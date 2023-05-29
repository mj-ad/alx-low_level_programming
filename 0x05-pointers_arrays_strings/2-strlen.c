#include "main.h"
/**
 * _strlen - return string length
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return size;
}
