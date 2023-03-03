#include <stdio.h>
#include "main.h"
/**
 * add - add two integers
 * @a: first number.
 * @b: second number.
 * Return: sum
 */

int add(int a, int b)
{
	int x;
	int sum = 0;

	sum = a + b + x;
	x = sum / 10;
	return (sum % 10);
}
/**
 * infinit_add - adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: the buffer that the function zwill use to store the result
 * @size_r: the buffer size
 * Return: pointer to the result
 * 0 if the result can not be stored in r
 */
char *infinit_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 1;
	int size_n1 = 0;
	int size_n2 = 0;
	/* get n1 size */
	while (*(n1 + i) != '\0')
	{
		i++;
		size_n1++;
	}
	i = 0;
	/* get n2 size */
	while (*(n2 + i) != '\0')
	{
		i++;
		size_n2++;
	}
	i = 0;
	if (size_n1 >= size_n2)
	{
		j++;
		r[size_r - 1] = 4;
	}
	return (r);
}
