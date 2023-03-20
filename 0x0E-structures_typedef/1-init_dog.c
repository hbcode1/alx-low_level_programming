#include "dog.h"
#include <stddef.h>
/**
 * init_dog - this function initialize a variable of type struct dog.
 *
 * @d: new struct
 * @name: struct name
 * @age: struct age
 * @owner: struct owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
