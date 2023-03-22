#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * and return it's index.
 *
 * @array: array.
 * @size: size of array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return:
 *	- The index of the first element.
 *	- -1: if no element matches.
 *	- -1: if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	/* case size <= 0 */
	if (!array || size <= 0 || !cmp)
		return (-1);
	/* itterate until first matche or the end */
	while (cmp(array[i]) == 0 && i < size)
		i++;
	/* when cmp reaches the end with no match */
	if (i == size)
		return (-1);
	return (i);
}
