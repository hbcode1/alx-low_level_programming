#ifndef MAIN_H
#define MAIN_H

/* C libs */
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
/* Macros */

#define MAX_BUFF_SIZE 1024

/* Prototypes */

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int print_error(int error, char *filename, int file_descriptor);
#endif /* end def main.h */
