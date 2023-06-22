#include "3-calc.h"
/**
 * main - entry
 * @argv: string
 * @argc: counter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", op(i, j));
	return (0);
}
