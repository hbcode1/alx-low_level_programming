#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  prints the sum of the two diagonals
* of a square matrix of integers.
* @a: matrix of integers.
* @size: size
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, suml = 0, sumr = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				suml += a[(i * size) + j];
			}
		}
		for (j = 0; j < size; j++)
		{
			if (i == size - 1 - j)
			{
				sumr += a[(i * size) + j];
			}
		}
	}
	printf("%d, %d\n", suml, sumr);
}
