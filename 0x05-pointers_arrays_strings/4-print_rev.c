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

len = str_len(s);
start = s;
end = s;

for(c = 0; c < len - 1; c++)
{
end++;
}
for (c = 0; c < (len/2); c++)
{
temp = *end;
*end = *start;
*start = temp;
start++;
end--;
}
}
