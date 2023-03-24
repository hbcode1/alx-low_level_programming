#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_s - handle s format case for print_all function.
 * @s: expected string.
 */

void print_s(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
* print_all - prints anything.
*
* @format: is a list of types of arguments passed to the function.
*/

void print_all(const char * const format, ...)
{
	va_list argp;/* pointer to argument list */
	int i = 0;

	/* initialise pointer to last fixed arg */
	va_start(argp, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argp, int));
				break;
			case 'i':
				printf("%d", va_arg(argp, int));
				break;
			case 'f':
				printf("%f", va_arg(argp, double));
				break;
			case 's':
				print_s(va_arg(argp, char *));
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(argp);
}
