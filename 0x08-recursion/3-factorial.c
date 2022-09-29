#include "main.h"

/**
 *factorial- returns the factorial of a number
 *@n: the number the the function works with
 *
 *Return: the factorial of a number
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
