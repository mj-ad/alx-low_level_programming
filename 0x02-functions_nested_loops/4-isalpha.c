#include "main.h"
#include <ctype.h>

/**
 *_isalpha- checks for alphabetic character.
 *@c: The character checked.
 *
 *Return: 1 if alphabet, 0 otherwise.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
