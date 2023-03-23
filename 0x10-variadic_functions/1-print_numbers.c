#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints integer numbers passed to it,
 *			followed by a new line.
 *
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	u_i i;
	va_list argp; /* pointer to argument list */

	va_start(argp, n); /* initialise pointer to last fixed arg */
	if (n)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(argp, int));
			if (separator && i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
}
