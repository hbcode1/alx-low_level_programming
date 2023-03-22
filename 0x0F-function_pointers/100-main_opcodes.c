#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints the opcodes of its own.
 *
 * @ac: number of arguments passed to the program.
 * @av: array of arguments passed to the program.
 *
 * Return: 0 Success.
 */

int main(int ac, char *av[])
{
	int (*ptr_main)() = &main, i = 0; /* pointer to main function */
	u_c *opcode = (u_c *)ptr_main;

	/* set 2 arguments rule */
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error2\n");
		exit(2);
	}
	while (i < atoi(av[1]) - 1)
	{
		printf("%02x ", *(opcode++));
		i++;
	}
	printf("%02x", *(opcode++));
	printf("\n");
	return (0);
}
