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
 *	- 0
 *      If the file can not be opened or read.
 *      If filename is NULL.
 *      If write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *name, size_t l)
{
	char *txt;
	int in = open(name, O_RDONLY), count = 0, len = 0;

	txt = malloc(sizeof(char) * l);
	if (txt == NULL)
		return (0);
	if (in < 0 || !name)
		return (0);
	len = read(in, txt, l);
	if (len < 0)
		return (0);
	count = write(STDOUT_FILENO, txt, len);
	if (count < 0 || len != count)
		return (0);
	close(in);
	free(txt);
	return (count);
}
