#include "shell.h"

void print_env(void);
int getstatus(int coef, char *buffer);

/**
 * check_builtins - check for built in commands
 * @buffer: pointer to the shell buffer
 * Return: void
 */
void check_builtins(char *buffer)
{
	int i, status;
	char *token;

	token = _strtok(buffer, " ");
	for (i = 0; buffer[i]; i++)
	{
		if (_strcmp(token, "env") == 0)
		{
			print_env();
			return;
		}

		if (_strcmp(token, "exit") == 0)
		{
			/* status % 256 */
			token = _strtok(NULL, " ");
			status = _atoi(token);
			exit(status % 256;
		}

		return;
	}
}

/**
 * print_env - print the enviroment variables line by line
 * Return: void
 */
void print_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);

	/* return; */
}
