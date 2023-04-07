#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @name: name of the file to be created.
 * @txt: content of the file (NULL terminated string)
 *
 * Return:
 *   - 1 Success.
 *   - (-1) Failure:
 *        - If file cant be created.
 *        - If write fails.
 *        - If filename is NULL.
 *        - etc...
 */

int create_file(const char *name, char *txt)
{
	int in = open(name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	int p;

	if (in < 0 || !name)
		return (-1);
	if (txt)
	{
		p = write(in, txt, strlen(txt));
		if (p < 0)
			return (p);
	}
	close(in);
	return (1);
}

