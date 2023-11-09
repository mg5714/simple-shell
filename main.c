#include "shell.h"

/**
 * main - entry point.
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	size_t buff_size = BUFFER_SIZE;
	char buffer[BUFFER_SIZE];

	_prompt();
	if (argc)
	{}

	while (1)
	{
		read_line(buffer, buff_size);
		remove_newline(buffer);
		execute_command(buffer, argv);

		_prompt();
	}
	return (0);
}
