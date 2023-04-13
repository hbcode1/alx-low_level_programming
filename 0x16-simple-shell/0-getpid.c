#include "main.h"
/**
 * main - print the proccess id of the current proccess
 * 
 * Return: 0 Success
 */

int main(void)
{
    __pid_t curr_pid;
    
    curr_pid = getpid();
    printf("%u\n", curr_pid);
    return (0);
}