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

	while (1)
	{
		read_line(buffer, buff_size);
		remove_newline(buffer);
		/* printf("BUFFER: [%s]\n", buffer); */
		check_builtins(buffer);
		execute_command(buffer, argv);
	}
	if (argc)
	{}
	return (0);
}
