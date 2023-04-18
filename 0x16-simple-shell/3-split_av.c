#include "main.h"

char **splitav(char *str, char *delim, int *n)
{
    char **words, *tok;
    int i = 0, j = 0, count = 0;

    while (*(str + i) != '\0')
    {
        while (*(delim + j) != '\0')
        {
            if(*(str + i) == *(delim + j))
                count++;
            j++;
        }
        j = 0;
        i++;
    }
    tok = strtok(str, delim);
    words = malloc((count + 1) * sizeof(char *));
    i = 0;
    while (tok)
    {
        words[i] = malloc(strlen(tok) + 1);
        strcpy(words[i], tok);
        i++;
        tok = strtok(NULL, delim);
    }
    *n = count + 1;
    return words;
}

/**
 * main - splits a string and returns an array of each word of the string.
 * 
 * @c: number of program args.
 * @v: array of program args
 * Return: 0 Success.
*/
int main(int ac, char *av[])
{
    char **words;
    int n, i;
    words = splitav(av[1], av[2], &n);
    ac = ac;
    for(i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);
    
    return (0);
}