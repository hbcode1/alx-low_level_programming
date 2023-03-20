#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: new struct
 * Descreption: if d element is NULL it will print "nil" instead
 *	if d is NULL it will print nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name ? d->name : "(nil)",
				d->age,
				d->owner > d->owner : "(nil)");
	}
}
