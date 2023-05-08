#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @name: name of the file to be altered
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

int append_text_to_file(const char *name, char *txt)
{
	int in = open(name, O_APPEND | O_WRONLY);
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
