#include "main.h"

/**
 *print_diagonal- function that draws a diagonal line on the terminal.
 *@n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
int space;
if (n > 0)
{
for (space = 0 ; space < n ; space++)
{
_putchar(92);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
