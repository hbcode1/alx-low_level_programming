#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - that returns the sum of all its parameters.
 *
 * @n: number of parameters passed to sum_them_all - 1
 *
 * Return:
 *	- 0 if n == 0;
 *	- the sum of all parameters exclude n
 */

int sum_them_all(const u_i n, ...)
{
	va_list argp; /* pointer to argument list */
	u_i i;
	int sum = 0;

	va_start(argp, n); /* initialise argument to the laset fixed argument */
	if (n)
	{
		for (i = 0; i < n; i++)
			/* add the cuurent argument to sum then point to the next arg */
			sum += va_arg(argp, int);
		return (sum);
	}
	/* end argp list */
	va_end(argp);
	return (0);
}
