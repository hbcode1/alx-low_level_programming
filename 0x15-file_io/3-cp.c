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
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fto = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 664);
	if (fto < 0 || !av[2])
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((len = read(ffrom, buff, MAX_BUFF_SIZE)) > 0)
	{

		s = write(fto, buff, len);
		if (s < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (len < 0)
	{	
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	printf("%s\n", buff);
	s = close(ffrom);
	if (s < 0)
	{
		dprintf(2, "Error: Can't close %d\n", ffrom);
		exit(100);
	}
	s = close(fto);
	if (s < 0)
	{
		dprintf(2, "Error: Can't close %d\n", fto);
		exit(100);
	}
	return (0);
}
