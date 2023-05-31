#include "main.h"
/**
 * rev_string -  prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int size = 0;
	int i;
	int a = 0;
	char temp;

	while (s[size] != '\0')
	{
		size++;
	}

	a = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		temp = s[i];
		s[i] = s[a];
		s[a--] = temp;
	}
}
