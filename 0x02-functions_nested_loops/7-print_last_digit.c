#include "main.h"

/**
 *print_last_digit-  function that prints the last digit of a number.
 *@c: number to be considered
 *
 *Return: value of the last digit
 */

int print_last_digit(int c)
{
int digit = c % 10;
if (digit < 0)
{
digit *= -1;
}
_putchar(digit + '0');
return (digit);
}
