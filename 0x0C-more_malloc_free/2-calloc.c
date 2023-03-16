#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory for an array, using malloc.
*
* @nmemb: number of elementes of the array.
* @size: bytes.
*
* Return:
*   - Pointer to th allocated memory.
*   - NULL : if size == 0 or nmemb == 0 or Failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	return (NULL);
	/* allocate memory */
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (mem);
	/* set memory to 0 */
	memset(mem, 0, nmemb * size);
	return (mem);
}
