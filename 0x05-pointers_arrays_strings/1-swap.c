#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *@*a: to be swapped with *b
 *@*b: to be swapped with *a
 *@a: pointer for *a
 *@b: pointer for *b
 */

void swap_int(int *a, int *b)
{
  if (*a != *b)
    {
      *a = *b;
      *b = *a;
    }
}
