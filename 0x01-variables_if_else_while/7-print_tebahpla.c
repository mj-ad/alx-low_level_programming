#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
char ch;
char new ='\n';
for (ch = 'Z' ; ch >= 'A' ; ch--)
{
putchar(tolower(ch));
}
putchar(new);
return (0);
}
