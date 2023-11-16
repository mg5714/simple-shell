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
	int i, status = EXIT_SUCCESS;
	char *token;
	char bufcpy[BUFFER_SIZE / 2];

	_strcpy(bufcpy, buffer);
	token = _strtok(bufcpy, " ");
	for (i = 0; buffer[i]; i++)
	{
		if (_strcmp(token, "env") == 0)
		{
			/* print_env(); */
			return;
		}

		if (_strcmp(token, "exit") == 0)
		{
			/* status % 256 */
			token = _strtok(NULL, " ");
			if (token)
			    status = _atoi(token);
			exit(status % 256);
		}

		return;
	}
}
