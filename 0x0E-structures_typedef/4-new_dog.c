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
	char *d_name, *d_owner;

	/* elemenate uneeded values */
	if (name == NULL || *name == '\0' || owner == NULL || *owner == '\0'|| age <= 0)
		return (NULL);
	/* allocate memory for d */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (d);

	/* allocate memory for d_name string */
	(*d).name = malloc(strlen(name) + 1);
	if ((*d).name == NULL)
		return (NULL);
	/* store a copy of name in d_name */
	d_name = strcpy((*d).name, name);
	/* allocate memory for d_owner string */
	(*d).owner = malloc(strlen(owner + 1));
	if ((*d).owner == NULL)
		return (NULL);
	/* store a copy of owner in d_owner */
	d_owner = strcpy((*d).owner, owner);
	/* Create new dog */
	d->name = d_name;
	d->age = age;
	d->owner = d_owner;
	return (d);
}
