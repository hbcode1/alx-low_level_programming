#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of arguments passed to the program.
 * @av: array of arguments passed to the program.
 * Return:
 * - NULL: if ac === 0 or av == NULL or (Failure).
 * - pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j = 0, k, slen = 0, alen;
	/* case ac or av null */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* get the new string full length */
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			slen++, j++;
		}
		slen++, j = 0;
	}
	/* allocate the new string */
	s = malloc(sizeof(char) * (slen + 1));
	/* handle malloc return */
	if (s == NULL)
		return (NULL);
	/* fill char by char */
	for (k = 0; k < slen ; k++)
	{
		/*fill args by args */
		for (i = 0; i < ac; i++)
		{
			alen = 0, j = 0;
			/* get arg len */
			while (av[i][j] != '\0')
			{
				alen++, j++;
			}
			j = 0;
			while (j < alen)
			{
				s[k] = av[i][j], k++, j++;
			}
			s[k] = '\n', k++;
		}
	}
	return (s);
}
