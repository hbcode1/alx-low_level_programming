#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @name: name of the file to read from.
 * @l: number of letters it should read and print.
 *
 * Return:
 *	- The number of letters it could read and print.
 *	- 0 If the file can not be opened or read.
 *	- 0 If filename is NULL.
 *	- 0 If write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *name, size_t l)
{
	char *txt;
	int in = open(name, O_RDONLY), count = 0;

	txt = malloc(sizeof(char) * l);
	if (txt == NULL)
		return (STDIN_FILENO);
	if (!in || !name)
		return (STDIN_FILENO);
	count = write(1, txt, read(in, txt, l));
	if (count < 0)
		return (STDIN_FILENO);
	close(in);
	free(txt);
	return (count);
}
