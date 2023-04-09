#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1235, 0);
	printf("1 | %d\n", n);
	n = get_bit(1235, 1);
	printf("1 | %d\n", n);
	n = get_bit(1235, 2);
	printf("0 | %d\n", n);
	n = get_bit(1235, 3);
	printf("0 | %d\n", n);
	n = get_bit(1235, 4);
	printf("1 | %d\n", n);
	n = get_bit(1235, 5);
	printf("0 | %d\n", n);
	n = get_bit(1235, 6);
	printf("1 | %d\n", n);
	n = get_bit(1235, 7);
	printf("1 | %d\n", n);
	n = get_bit(1235, 8);
	printf("0 | %d\n", n);
	n = get_bit(1235, 9);
	printf("0 | %d\n", n);
	n = get_bit(1235, 10);
	printf("1 | %d\n", n);
	n = get_bit(1235, 11);
	printf("-1 | %d\n", n);
	n = get_bit(1235, -5);
	printf("-1 | %d\n", n);
	n = get_bit(1235, 12);
	printf("-1 | %d\n", n);
	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}
