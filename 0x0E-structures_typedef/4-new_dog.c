#include "dog.h"
#include <stdlib.h>
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
	dog_t *duck;

	duck = malloc(sizeof(dog_t));
	if (duck == NULL)
		return (duck);
	duck->name = name;
	duck->age = age;
	duck->owner = owner;
	return (duck);
}
