#include "main.h"

/**
 *print_square- function that prints a square, followed by a new line.
 *@size: the size of the square
 */

void print_square(int size)
{
int len, br;
if(size > 0)
{
for (len = 0 ; len < size ; len++)
{
for (br = 0; br < size ; br++)
{
_putchar('#');
}
if (len == size -1)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
