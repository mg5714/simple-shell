#ifndef SHELL_H
#define SHELL_H

extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024
#define PROMPT "$ "

void read_line(char *buffer, size_t buff_size);
void *remove_newline(char *buffer);
void execute_command(char *buffer, char **argv);
void argo(int argc, char* argv[]);
char *_getenv(char *var);
char *get_path(char *cmd);
void _prompt(void);

void pprint(const char *format);
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
#endif
