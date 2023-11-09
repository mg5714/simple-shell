#include "shell.h"

/**
 * bincmd - add /bin/ prefix to the command name
 * @cmd: command name
 * Return: /bin/cmd
 */
char *bincmd(char *cmd)
{
	char *command, *bin, *p1, *p2;

	command = malloc(sizeof(char) * 16);
	bin = "/bin/";
	p1 = command;
	p2 = bin;
	
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++; p2++;
	}

	p2 = cmd;
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++; p2++;
	}
	*p1 = '\0';
	return (command);

}

/**
 * remove_newline - removes newline character from string
 * @buffer: string
 *
 * Return: the pointer
 */
void *remove_newline(char *buffer)
{
buffer[strcspn(buffer, "\n")] = '\0';
return (buffer);
}

/**
 * execute_command - executes a command
 * @buffer: buffer with the command to execute
 *
 * Return: void
 */
void execute_command(char *buffer, char **argv)
{
	char **argss = argsarray(buffer);
	pid_t pid = fork();

	if (pid < 0)
	{
		perror("fork() error");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(argss[0], argss, NULL);

		perror(argv[0]);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
