#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count: number of arguments passed to the program.
 * @argv: argument vector: one-dimensional array of arguments
 * that was passed to the program.
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 1 ; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
