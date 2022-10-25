#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_them_all - add all numbers
 *@n: number of int to be added
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_args num;
int sum = 0, i;
va_start(num, n);
i = 0;
for (i = 0; i < sum ; i++)
sum = va_arg (num, int);
va_end (num);
return (sum);
}
