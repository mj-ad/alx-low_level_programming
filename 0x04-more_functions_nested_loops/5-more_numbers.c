#include "main.h"

/**
 *more_numbers- prints 10 times the numbers from 0 to 14 followed by new line.
 */

void more_numbers(void)
{
int n = 0;
int c;
for (n = 0 ; n <= 9 ; n++)
{
for (c = 0 ; c <= 14 ; c++)
{
if (c > 9)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
