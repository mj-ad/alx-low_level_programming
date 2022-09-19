#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 *@*s: value of string lenght
 *@s: pointer
 *
 *Return: the length of a string. 
 */

int _strlen(char *s)
{
int num = 0;
while (*s != '\0')
{
num++;
s++;
}
return num;
}
