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
int get_bit(unsigned long int number, unsigned int index);
int set_bit(unsigned long int *number, unsigned int index);
int clear_bit(unsigned long int *number, unsigned int index);
u_i flip_bits(unsigned long int number1, unsigned long int number2);
int get_endianness(void);
#endif /* end def main.h */
