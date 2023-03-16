#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size bytes.
 * Return:
 * - 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	if (b == 0)
		return (NULL);
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
