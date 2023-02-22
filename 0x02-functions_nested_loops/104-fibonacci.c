#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	unsigned long int i, j, s;

	i = 0;
	j = 1;
	for (a = 1 ; a <= 98; a++)
	{
		s = i;
		i = j;
		j = i + s;
		printf("%lu", j);
		if (a != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
