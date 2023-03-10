#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count: number of arguments passed to the program.
 * @argv: argument vector: one-dimensional array of arguments
 * that was passed to the program.
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
