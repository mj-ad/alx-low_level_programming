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
while (*b != '\0')
{
if (*b != '0' && *b != '1')
{
return (0);
}
b++;
}
b--;
num = 0;
i = 0; 
while (*b != '\0')
{
res = *b - '0';
num = num + (res << i);
b--;
i++;
}
return (num);
}
