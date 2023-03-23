#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>

/**
 * pstr - handle s format case.
 * @s: expected string.
 */

void pstr(char *s)
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
	va_list argp;
	char *frm, *str;
	int f = 0, i = 0, count = 0;

	/* allocate memory for temporary format */
	frm = malloc(strlen(format) + 1);
	/* store copy of format in temp */
	strcpy(frm, format);
	/* initialise pointer to last fixed arg */
	va_start(argp, format);

	/* get number of format expected */
	while (*(frm + i) != '\0')
	{
		switch (*(frm + i))
		{
			case 'c':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'f':
				count++;
				break;
			case 's':
				count++;
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	while (*frm != '\0')
	{
		switch (*frm)
		{
			case 'c':
				printf("%c", va_arg(argp, int));
				f++;
				break;
			case 'i':
				printf("%d", va_arg(argp, int));
				f++;
				break;
			case 'f':
				printf("%f", va_arg(argp, double));
				f++;
				break;
			case 's':
				str = va_arg(argp, char *);
				f++;
				pstr(str);
				break;
			default:
				frm++;
				continue;
		}
		if (*(frm + 1) != '\0' && count != f)
			printf(", ");
		frm++;
	}
	va_end(argp);
	printf("\n");
}
