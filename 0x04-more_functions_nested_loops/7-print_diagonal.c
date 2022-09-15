#include "main.h"

/**
 *print_diagonal- function that draws a diagonal line on the terminal.
 *@n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
int len, space;
if (n > 0)
{
for (len = 0 ; len < n ; len++)
{
for (space = 0 ; space < len ; space++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
