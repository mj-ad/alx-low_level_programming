#include "main.h"
/**
 * alloc_grid - creates a 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2d array of int
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **s;

	if (width < 1 || height < 1)
		return (NULL);

	s = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		s[i] = (int *)malloc(width * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
