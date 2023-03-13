#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: character to fill it with.
 * Return:
 * - NULL: if size is 0 oor if program fails.
 * - pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
