#include "3-calc.h"
/**
 * get_op_func - get func
 * @s: char
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (*s == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
