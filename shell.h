#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stddef.h>

#define BUFFER_SIZE 1024
/* #define PROMPT ">> " */

void *remove_newline(char *buffer);
void execute_command(char *buffer, char **argv);
void _prompt(void);
/* void read_line(char *args[]); */
void pprint(const char *format);
int _strlen(const char *s);
void read_line(char *buffer, size_t buff_size);
char **argsarray(char *buffer);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
/* void execute(char *buffer); */

#endif
