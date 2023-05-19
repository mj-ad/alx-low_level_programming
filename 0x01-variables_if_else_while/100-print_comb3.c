#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	char i;
	char c;
	int j = 1;
	int k = 0;

	for (i = '0'; i <= '9'; i++)
	{
		k = 0;
		for (c = '0'; c <= '9'; c++)
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
