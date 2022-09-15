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
char c = v * n;
_putchar(c);
_putchar('\n')
}
else
{
_putchar('\n');
}
