#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using malloc and free.
*
* @ptr: pointer memory block.
* @os: old size of ptr in bytes.
* @ns: new size of ptr in bytes.
*
* Return:
*   - ptr: if ns == os.
*   - NULL: if ns == 0 and ptr != NULL.
*   - pointer to new allocated space.
*/

void *_realloc(void *ptr, unsigned int os, unsigned int ns)
{
	char *mem, *p;
	unsigned int i;

	p = ptr;
	/* case old size same as old size */
	if (ns == os)
		return (ptr);
	/* case new size is 0 */
	if (ptr != NULL && ns == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* case ptr is null = malloc(new size) */
	if (ptr == NULL)
	{
		mem = malloc(ns);
		if (mem == NULL)
			return (mem);
		free(ptr);
	}
	mem = malloc(ns);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < os; i++)
	{
		mem[i] = p[i];
	}
	/* dispose of ptr */
	free(ptr);
	return (mem);
}
