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
char newl = '\n';
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(tolower(ch));
}
putchar(space);
return 0;
}
