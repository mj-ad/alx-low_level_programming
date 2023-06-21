#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer to name
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
