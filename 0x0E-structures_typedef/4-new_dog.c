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
	dog_t *duck;

	duck = malloc(sizeof(dog_t));
	if (duck == NULL)
		return (duck);
	memcpy(duck,char *name,sizeof(name));
	memcpy(duck,char *owner,sizeof(owner));
	duck->age = age;
	return (duck);
}
