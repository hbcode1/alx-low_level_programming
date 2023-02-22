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
	long int a, s, i, j;

	i = 0;
	j = 1;
	for (a = 1 ; a <= 98; a++)
	{
		s = i;
		i = j;
		j = i + s;
		if(j % 10000000000000000000)
			printf("%ld", j);
		if (a != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
