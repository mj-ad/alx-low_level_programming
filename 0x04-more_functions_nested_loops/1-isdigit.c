#include "main.h"
#include <stdio.h>

/**
 *_isdigit- function that checks if an input is a digit
 *@c: input to be checked
 *
 *Return: 1 if input is a digit and 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
