#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@*s: pointer to the string
 *@s: the string
 */

void print_rev(char *s)
{
int c, len;
char *start;
char *end;
char temp;

for(len = 0; len <= *s; len++)
{
end++;
}
for (c = 0; c < (end/2); c++)
{
temp = *end;
*end = *start;
*start = temp;
start++;
end--;
}
}
