#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @w: number of rows of the grid.
 * @h: number of columns of the grid.
 * Return:
 * - pointer to 2d array (Success).
 * - NULL (Failure).
 */
int **alloc_grid(int w, int h)
{
	int **a, i, j;

	if (w * h <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * h);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		a[i] = malloc(sizeof(int) * w);
		if (a[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < w; j++)
			a[i][j] = 0;
	}
	return (a);
}
