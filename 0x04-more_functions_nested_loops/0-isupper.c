#include "main.h"
#include <stdio.h>

/**
 *_isupper- function that checks if input is uppercase or not.
 *@c: input to be considered
 *
 *Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
