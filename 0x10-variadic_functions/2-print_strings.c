#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (i == n - 1 && s)
			printf("%s", s);
		else
		{
			if (s == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", s, separator);
		}
	}
	printf("\n");
	va_end(ap);
}
