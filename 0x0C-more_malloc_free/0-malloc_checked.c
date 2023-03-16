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
	void *p;

	p = malloc(b);
	if (p == NULL || b == 0)
		exit(98);
	else
		return (p);
}
