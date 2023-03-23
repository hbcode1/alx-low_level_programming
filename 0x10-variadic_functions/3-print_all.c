#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>

/**
* print_all - prints anything.
*
* @format: is a list of types of arguments passed to the function.
*/

void print_all(const char * const format, ...)
{
va_list argp;
char *frm;

/* allocate memory for temporary format */
frm = malloc(strlen(format) + 1);
/* store copy of format in temp */
strcpy(frm, format);
/* initialise pointer to last fixed arg */
va_start(argp, format);

while (*frm != '\0')
{
switch (*frm)
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
printf("%s", va_arg(argp, char *));
break;
default:
frm++;
continue;
}
if (*(frm + 1) != '\0')
printf(", ");
frm++;
}
va_end(argp);
printf("\n");
}
