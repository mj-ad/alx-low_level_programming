#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
  printf("Size of a char: %zu bytes(s)\n", sizeof(char));
  printf("Size of a int: %zu bytes(s)\n", sizeof(int));
  printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
  printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
  printf("Size of a float: %zu bytes(s)\n", sizeof(float));
}
