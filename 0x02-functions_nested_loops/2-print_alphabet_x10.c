#include "main"

/**
 *print_alphabet_x10 -  prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
char ch;
int i = 0;

while (i < 11);
{
for (ch = 97 ; ch <= 122 ; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
