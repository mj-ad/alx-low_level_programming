#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@*s: pointer to the string
 *@s: the string
 */

void print_rev(char *s)
{
int len;

while (s[len] != '\0')
{
len++;
}
for (len = len - 1; len >= 0; len++)
{
_putchar(s[len]);
}
_putchar('\n');
}
