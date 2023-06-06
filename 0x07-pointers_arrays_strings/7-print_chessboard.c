#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;
	int size = 0;

	while (a[i][0] != '\0')
	{
		size++;
		i++;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
