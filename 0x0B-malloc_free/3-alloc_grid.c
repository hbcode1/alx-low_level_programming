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
	int **a, i, j, f;
	/* case w or h <= 0 */
	if (width <= 0 || height <= 0)
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
			for (f = i - 1; i >= 0; f--)
				free(a[f]);
			free(a);
			return (NULL);
		}
		/* fill arrays */
		j = 0;
		while (j < height)
		{
			a[i][j] = 0;
			j++;
		}

	}
	return (a);
}
