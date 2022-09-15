#include "main.h"

/**
 *print_line- function that draws a straight line in the terminal.
 *@n: the number of times the character _ should be printed
 *
 *Return: Always 0
 */

void print_line(int n)
{
char v = '_';
if (n > 0)
{
for (v = 1 ; v <= n ; v++)
{
_putchar(v);
}
_putchar('\n')
}
else
{
_putchar('\n');
}
}
