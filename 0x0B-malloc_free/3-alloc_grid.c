#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of rows of the grid.
 * @height: number of columns of the grid.
 * Return:
 * - pointer to 2d array (Success).
 * - NULL (Failure).
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;
	/* case w or h <= 0 */
	if (width * height <= 0)
		return (NULL);
	/* allocate pointer */
	a = malloc(sizeof(*a) * width);
	if (a == NULL)
	{
		return (NULL);
	}
	/* allocate arrays */
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(int) * height);
		/* if failed free and retrun null*/
		if (a[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
		j = 0;
	}
	return (a);
}
