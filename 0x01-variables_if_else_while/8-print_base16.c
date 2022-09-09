#include <stdio.h>
#include <cytpe.h>

/**
 *main - entry point
 *
 *Return: Always 0
 */

int main(void)
{
int n;
char ch;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n % 10 + '0');
}
for (ch = 'A' ; ch <= 'F' ; ch++)
{
putchar(tolower(ch));
}
putchar('\n');
return (0);
}
