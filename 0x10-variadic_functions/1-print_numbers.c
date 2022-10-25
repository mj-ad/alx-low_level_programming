#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - prints numbers
 *@separator: separated the numbers
 *@n: number of int to be printed
 *
 *Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  if (separator == NULL)
    return;
  else
    {
      va_list num;
      va_start(num, n);
      i = 0;
      for (i = 0; i < n; i++)
	{
	  if (va_arg(num, int) > 9)
	    {
	      int a = va_arg(num, int);
	      _putchar(a % 10 + '0');
	    }
	  else
	    {
	      _putchar(va_arg(num, int));
	    }
	  _putchar(*separator);
	}
      _putchar('\n');
      va_end(num);
    }
}
