#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 * @argc: count
 * @argv: string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			putchar(argv[i][j]);
		}
	}
	putchar('\n');
	return (0);
}
