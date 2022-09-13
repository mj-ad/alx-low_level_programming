#include "main.h"

/**
 *times_table- prints the 9 times table, starting with 0.
 */

void times_table(void)
{
int num, multi, prodt;
for (num = 0; num <=9; num++)
{
_putchar('0');
for (multi = 1; multi <= 9; multi++)
{
_putchar(',');
_putchar(' ');
prodt = num * multi;
if (prodt <= 9)
{
_putchar(' ');
}
else
{
_putchar((prodt / 10) + '0');
}
_putchar((prodt % 10) + '0');
}
_putchar('\n');
}
}
