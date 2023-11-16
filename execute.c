#include "shell.h"

/**
 * remove_newline - removes newline character from string
 * @buffer: string
 *
 * Return: the pointer
 */
void *remove_newline(char *buffer)
{
	char *p = buffer;

	while (*p != 10)
		p++;

	*p = '\0';
	return (buffer);
}

/**
 * execute_command - executes a command
 * @buffer: buffer with the command to execute
 * @argv: array of command line arguments
 * Return: void
 */
void execute_command(char *buffer, char **argv)
{
	char *args[BUFFER_SIZE / 2], *token, *path;
	pid_t pid;
	int i = 0, status, exitstat = EXIT_SUCCESS, index = 1;

	token = _strtok(buffer, " ");
	while (token != NULL)
	{
		args[i++] = token;
		token = _strtok(NULL, " ");
	}
	args[i] = NULL;
	path = get_path(args[0]);
	if (!path)
	{
		fprintf(stderr, "%s: %d: %s: not found\n", argv[0], index++, args[0]);
		exit(127);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("fork() error");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(path, args, environ) == -1)
		{
			perror(argv[0]);
			exit(exitstat);
		}
	}
	else
	{
		free(path);
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
			exit(WEXITSTATUS(status));
	}
}
