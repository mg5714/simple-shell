#include "shell.h"

void print_env(void);

/**
 * check_builtins - check for built in commands
 * @buffer: pointer to the shell buffer
 * Return: void
 */
void check_builtins(char *buffer)
{
	int i;

	for (i = 0; buffer[i]; i++)
	{
		if (!_isalpha(buffer[i]))
			continue;

		if (_strcmp((buffer + i), "env") == 0)
		{
			print_env();
			return;
		}

		if (_strcmp(buffer + i, "exit") == 0)
		{
			exit(EXIT_SUCCESS);
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
