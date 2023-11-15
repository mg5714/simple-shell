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

	do
	{
		read_line(buffer, buff_size, argv);
		remove_newline(buffer);
		if (_strlen(buffer) == 0)
		{
			fflush(stdin);
			continue;
		}
		check_builtins(buffer);
		execute_command(buffer, argv);
	} while(1);
	if (argc)
	{}
	return (0);
}
