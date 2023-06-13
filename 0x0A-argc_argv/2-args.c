#include <stdio.h>

/**
 * main - Entry
 * @argc: counter
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%c", argv[i][j]);
		}
		putchar('\n');
	}
	return (0);
}
