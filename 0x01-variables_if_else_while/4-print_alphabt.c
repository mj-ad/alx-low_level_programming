#include <stdio.h>
#include <ctype.h>

/**
 *main - entry point
 *
 *Return: Always 0
 */

int main(void)
{
char ch;
char new = '\n';
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
if  (ch == 'Q' || ch == 'E')
{
continue;
}
putchar(tolower(ch));
}
putchar(new);
return (0);
}
