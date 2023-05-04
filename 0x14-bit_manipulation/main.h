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
 * ul_i - typedef for unsigned long int.
 */
typedef unsigned long int ul_i;

/* Prototypes */
int _putchar(char);
u_i binary_to_uint(const char *binary);
void print_binary(ul_i number);
#endif /* end def main.h */
