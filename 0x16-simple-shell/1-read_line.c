#include "main.h"
/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 * 
 * Return: 0 Success.
*/

int main(void)
{
    char *line;
    size_t cols = 64;

    line = (char *)malloc(cols * sizeof(char));
    if (!line)
    {
        printf("Error\n");
        exit(1);
    }
    printf("$ ");
    /* read standard input */
    getline(&line, &cols, stdin);
    if(feof)
    printf("%s", line);
    free(line);
    return (0);
}