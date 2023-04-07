#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 *
 * @ac: number of arguments passed to the program.
 * @av: array of arguments passed to program.
 *
 * Return:
 *	- 0 Success.
 */

int main(int ac, char *av[])
{
	int fto, ffrom, s = 0, len = 0;
	char buff[MAX_BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ffrom = open(av[1], O_RDONLY);
	if (ffrom < 0 || !av[1])
		print_error(98, av[1], 0);
	fto = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fto < 0 || !av[2])
		print_error(99, av[2], 0);
	while ((len = read(ffrom, buff, MAX_BUFF_SIZE)) > 0)
	{

		s = write(fto, buff, len);
		if (s < 0)
			print_error(99, av[2], 0);
	}
	if (len < 0)
		print_error(98, av[1], 0);
	s = close(ffrom);
	if (s < 0)
		print_error(100, NULL, ffrom);
	s = close(fto);
	if (s < 0)
		print_error(1002, NULL, fto);
	return (0);
}

/**
 * print_error -  prints message error on the POSIX standard error
 *			and hanlde exit status.
 * @e: type of error.(exit status).
 * @name: name of the file concernong error.
 * @d: descriptor.
 * Return:
 *	- 0 Success.
 */

int print_error(int e, char *name, int d)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(e);
	}
	else if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(e);
	}
	else if (e == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(e);
	}
	else
		dprintf(STDERR_FILENO, "Unknown error\n");
	return (0);
}
