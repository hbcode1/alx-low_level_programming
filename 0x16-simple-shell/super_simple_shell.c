#include "main.h"

/**
 * main - super simple shell
 * 
 * Return: 0 Success
 */

int main(int ac, char *av[])
{
    char *line, *commands[2] = {NULL, NULL};
    size_t n = 0;
    int r, shell = 1, status;
    pid_t pid;

    (void)ac, (void)av;
    while (shell)
    {
        printf("$ ");
        r = getline(&line, &n,stdin);
        if (r == -1)
        {
            printf("Exit\n");
            free(line);
            exit(EXIT_SUCCESS);
        }
        commands[0] = strtok(line, "\n");
        pid = fork();
        if (pid == -1)
        {
            perror("Forking error");
            free(line);
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        {
            if (execve(commands[0], commands, NULL) == -1)
            {
                perror(commands[0]);
            }
            exit(1);
        }
        else
        {
            wait(&status);
        }
    }
    free(line);
    return (0);
}