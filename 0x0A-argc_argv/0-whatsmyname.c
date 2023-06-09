#include "main.h"

/**
 * main- Entry
 * @argc: count
 * @argv: string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int s = 0;
	int j;

	while (**argv != 0)
	{
		s++;
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < s; j++)
		{
			_putchar(argv[i][j]);
		}
	}
	return (0);
}
