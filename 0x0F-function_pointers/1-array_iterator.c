#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function givern
 * as a parameter on each element of an array.
 *
 * @array: array of elements to be execute on.
 * @size: size of array.
 * @action: pointer to function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
