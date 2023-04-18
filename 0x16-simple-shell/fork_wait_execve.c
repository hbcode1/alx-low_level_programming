#include "main.h"

/**
 * main - executes the command ls -l /tmp in 5 different child processes
 * 
 * Return: 0 Success
*/

int main(int ac, char *av[])
{
    pid_t pid;
    char *args[] = {"/bin/ls", "-l", "/tmp", NULL};
    int i = 0, status;
    (void)ac, (void)av;
   while (i < 5)
   {
    printf("child[%i]\n", i);
    pid = fork();
    if (pid == -1)
    {
        printf("fork error\n");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        execve(args[0], args, NULL);
        perror(args[0]);
        exit(EXIT_FAILURE);
    }
    else
    {
        waitpid(pid, &status, 0);
    }
    i++;
   }
}