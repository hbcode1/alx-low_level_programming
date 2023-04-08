#ifndef MAIN_H
#define MAIN_H

/* C Libs */
#include <stdio.h>
#include <limits.h>

/* Macros */

/**
 * u_i - typedef for unsigned int.
 */
typedef unsigned int u_i;

/**
 * u_i - typedef for long unsigned int.
 */
typedef unsigned long int ul_i;

/* Prototypes */
int _putchar(char);
u_i binary_to_uint(const char *b);
void print_binary(ul_i n);
#endif /* end def main.h */
