#include "main.h"

/**
 * reverse_array -  reverses an the content of ana rray of integers
 * @a: array
 * @n: number of elements in array a
 *
 * Return: void
 */
void reverse_array(int *a , int n)
{
	int t;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
