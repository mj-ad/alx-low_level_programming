#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch == 101 || ch == 113)
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
