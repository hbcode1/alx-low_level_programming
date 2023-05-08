#include "main.h"

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
