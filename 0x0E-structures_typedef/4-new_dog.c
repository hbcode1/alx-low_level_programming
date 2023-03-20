#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - this function creates struct for new dog.
 *
 * @name: struct name
 * @age: struct age
 * @owner: struct owner
 *
 * Return: Pointer to new allocated struct (Success) or NULL (Failure)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* eleminate unneeded values */
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* allocate memory for d */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (d);

	/* allocate memory for name */
	d->name = malloc((strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	/* allocate memory for owner */
	d->owner = malloc((strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	/* create new dog */
	d->name = memcpy(d->name, name, strlen(name) + 1);
	d->age = age;
	d->owner = memcpy(d->owner, owner, strlen(owner) + 1);
	return (d);
}
