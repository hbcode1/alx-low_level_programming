#include "function_pointers.h"

/**
 * print_name - This function prints a name.
 *
 * @name: name to print
 * @f: pointer to function passed to print_name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
