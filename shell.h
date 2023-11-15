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
void check_exit(char *buffer);
char *_getenv(char *var);
char *get_path(char *cmd);
void _prompt(void);
void check_builtins(char *buffer);

void pprint(const char *format);
int _strlen(const char *s);
void read_line(char *buffer, size_t buff_size);
char **argsarray(char *buffer);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);
char *_strtok(char *str, const char *delimiters);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
void print_env(void);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_strsep(char **stringp, const char *delim);
char *_strpbrk(const char* str, const char* accept);
int _isalpha(int c);
int _isdigit(int c);
int _atoi(char *s);
#endif
