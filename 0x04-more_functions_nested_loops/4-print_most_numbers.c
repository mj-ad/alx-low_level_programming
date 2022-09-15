#include "main.h"

/**
 *print_most_numbers- prints the numbers, from 0 to 9, followed by a new line.
 */

void print_most_numbers(void)
{
char ch;
while (ch != '2' && ch != '4')
{
for (ch = 0 ; ch <= 9 ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
