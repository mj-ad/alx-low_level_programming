#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked-  function that allocates memory using malloc.
 *@b: returns a pointer to the allocated memory
 *
 *Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
_putchar(ptr);

if (ptr == NULL)
{
_putchar(int('b'));
exit(1);
}
}
