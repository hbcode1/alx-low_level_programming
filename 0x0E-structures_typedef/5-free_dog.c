#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - thi function that frees dogs allocated by malloc.
 * @d: pointer to dog.
 */

void free_dog(dog_t *d)
{
	free(NULL);
	free(d);
}
