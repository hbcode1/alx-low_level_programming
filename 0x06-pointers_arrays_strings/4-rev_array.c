#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, hold;

	for (i = 0; i < n ; i++)
	{
		hold = a[i];
		a[i] = a[n - 1];
		a[n - 1] = hold;
		n--;
	}
}
