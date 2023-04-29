#include "main.h"

/**
 * _get_line - function like getline
 *
 * Return:
 *  - return the  number  of  characters read,
 *      including  the delimiter character,
 *      but not including the termi‐nating null byte ('\0'
 *  - (-1) return -1 on failure to read a line
 *      (including end-of-file condition)
 */
int _getline(char **line, int *n, FILE* stream)
{
	char *buff = malloc(*n);
	int i = 0, c;

	/* handle malloc return */
	if (!buff)
	{
		return (-1);
	}
	while(i < *n - 1)
	{
		c = getc(stream); /* read single char */
		if (c == EOF) /* stop reading when EOF or new line */
			break;
		buff[i] = (char)c; /* append character */
		i++;
	}
	buff[i] = '\0'; /* terminate null*/
	if (i == 0 || c == EOF) /* case empty input or EOF*/
		return (-1);
	else
		strncpy(*line, buff, *n);
	free(buff);
	return (i);
}
/**
 * main - Entry point
 *
 * Return:
 *  - number of character
 *  - (-1) when EOF or Ctrl+d
*/
int main(void)
{
	char *line = malloc(100);
	int cols = 2;

	printf("$ ");
	/* read standard input */
	while (_getline(&line, &cols, stdin) != -1)
		printf("%s", line);
	free(line);
	return (0);
}
