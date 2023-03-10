#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - check if string can be converted to a number.
 * @n: string.
 * Return:
 * 1 number
 * 0 not number
 */

int is_number(char *n)
{
	while (*n != '\0')
	{
		if (isdigit(*n) == 0)
			return (0);
		n++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count: number of arguments passed to the program.
 * @argv: argument vector: one-dimensional array of arguments
 * that was passed to the program.
 * Return: 0 Success, 1 Error.
 */

int main(int argc, char **argv)
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (is_number(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
			printf("%d\n", sum);
	}
	return (0);
}
