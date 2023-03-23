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
va_list argp, argp1;
char *frm;

/* allocate memory for temporary format */
frm = malloc(strlen(format) + 1);
/* store copy of format in temp */
strcpy(frm, format);
/* initialise pointer to last fixed arg */
va_start(argp, format);

va_copy(argp1, argp);
while (*frm != '\0')
{
if (*frm == 'c')
{
printf("%c, ", va_arg(argp1, int));
frm++;
}
if (*frm == 'i')
{
printf("%d, ", va_arg(argp1, int));
frm++;
}
frm++;
}
va_end(argp);
printf("\n");
}

