#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int c;
	int j = 1;
	int k = 0;

	for (i = 48; i <= 57; i++)
	{
		k = 0;
		for (c = 48; c <= 57; c++)
		{
			if (k < j)
			{
				k++;
				continue;
			}
			else
			{
				putchar(i);
				putchar(c);
				if (i != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
		}
		j++;
	}
	putchar('\n');
	return (0);
}
