#include "main.h"

/**
 *print_line- function that draws a straight line in the terminal.
 *@n: the number of times the character _ should be printed
 *
 *Return: Always 0
 */

void print_line(int n)
{
int l;
if (n > 0)
{
for (l = 1 ; l <= n ; l++)
{
_putchar('_');
}
_putchar('\n')
}
else
{
_putchar('\n');
}
}
