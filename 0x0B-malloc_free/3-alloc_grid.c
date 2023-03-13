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
	int **a, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(a) * width);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(a) * height);
		if (a[i] == NULL)
			return (NULL);
	}
	return (a);
}
