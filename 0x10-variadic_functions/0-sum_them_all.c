#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *sum_them_all - add all numbers
 *@n: number of int to be added
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list num;
int sum = 0;
unsigned int i;
va_start(num, n);
i = 0;
if (n == 0)
{
return (0);
}
else
{
for (i = 0; i < n ; i++)
sum += va_arg (num, int);
}
va_end (num);
return (sum);
}
