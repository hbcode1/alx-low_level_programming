#ifndef MAIN_H
#define MAIN_H

#define MAX_BUFF 1024

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char);

/* Task 0 to 2*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Task 3: cp */
int print_error(int error, char *filename, int file_descriptor);

#endif /* end def main.h */
