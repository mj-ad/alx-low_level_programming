#include "main.h"

/**
 *get_bit - gets the value of a given
 *          bit at a given index
 *@n: number
 *@index: index to be checked
 *
 *Return: the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
int b;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
b = (n >> index) & 1;
return (bit);
}
