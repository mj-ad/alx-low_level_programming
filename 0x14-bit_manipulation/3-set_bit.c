#include "main.h"

/**
 *set_bit - sets bit to 1 at an index
 *@n: number that bit will be changed
 *@index: index of the bit
 *
 *Return: 1 if working and -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
int b;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
b = (*n >> index) & 1;
b = 1;
return (1);
}
