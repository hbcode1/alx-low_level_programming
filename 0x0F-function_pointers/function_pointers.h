#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
/**
 * u_c - typedef for unsigned char
 */
typedef unsigned char u_c;
#endif /* end def function_pointers.h */
