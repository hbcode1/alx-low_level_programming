#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, passed to it separated,
 *				then print new line.
 * @separator: string to separate strings.
 * @n: number of string passed.
 */

void print_strings(const char *separator, const u_i n, ...)
{
	u_i i;
	va_list argp; /* pointer to argument list */
	char *temp_arg; /* to store temporary arg */

	va_start(argp, n); /* pointer to the last fixed arg */
	if (n)
	{
		for (i = 0; i < n; i++)
		{
			temp_arg = va_arg(argp, char *);
			if (temp_arg)
				printf("%s", temp_arg);
			else
				printf("(nil)");
			if (separator && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(argp); /* end arg list */
}
