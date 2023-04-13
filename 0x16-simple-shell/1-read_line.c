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
    size_t cols = 0;

    printf("$ ");
    /* read standard input */
    while (getline(&line, &cols, stdin) != -1)
        printf("%s", line);
    free(line);

    return (0);
}