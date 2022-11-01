#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts binary to uint
 *@b: number to be converted
 *
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i, num, res;
if (!b)
return (0);
while (*b)
{
if (*b != 0 && *b != 1)
{
return (0);
}
b++;
}
i = 0;
num = 0;
b--;
while (*b)
{
res = *b - '0';
num = num + (res << i);
b--;
i++;
}
return (num);
}
