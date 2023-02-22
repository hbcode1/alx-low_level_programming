#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	i = 1;
	j = 2;
	for (i = 1 ; i <= 50; i++)
	{
		j = j + i;
		printf("%d, ", j);
	}
	printf("\n");
	return (0);
}
