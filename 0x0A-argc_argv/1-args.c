#include <stdio.h>

/**
 * main - Entry
 * @argc: count
 * @argv: arguments
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
			continue;
		}
	}
	printf("%d\n", argc - 1);
	return (0);
}
