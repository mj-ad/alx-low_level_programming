#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");
	va_end(ap);
}
