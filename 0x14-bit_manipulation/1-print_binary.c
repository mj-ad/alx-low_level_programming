#include "main.h"
#include <stddef.h>

/**
 *print_binary - changes decimal to binary
 *@n: number to be changed
 *
 *Return: null
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
