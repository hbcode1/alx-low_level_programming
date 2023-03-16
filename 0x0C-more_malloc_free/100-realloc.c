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
	void *mem;
	unsigned int min;

if (ns == os)
	return (ptr);
if (ptr != NULL && ns == 0)
{
free(ptr);
return (NULL);
}
min = os ? os < ns : ns;
if (ptr == NULL)
{
mem = malloc(min);
if (mem == NULL)
	return (mem);
}
if (ns > os)
{
mem = malloc(ns);
if (mem == NULL)
	return (NULL);
free(ptr);
}
return (mem);
}
