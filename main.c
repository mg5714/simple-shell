#include "shell.h"
#include <stddef.h>

/**
 * main - entry point.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	size_t buff_size = BUFFER_SIZE;
	char buffer[BUFFER_SIZE];
	char *cmd;

	_prompt();

	while (1)
	{
		read_line(buffer, buff_size);
		remove_newline(buffer);
		cmd = "command ece";
		get_path(cmd);
		check_exit(buffer);
		if (strcmp(strtok(buffer, " "), "env") == 0)
		{
			print_env();
		}
		else
			execute_command(buffer, argv);

		_prompt();
	}
	return (0);
}
