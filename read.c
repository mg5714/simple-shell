#include "shell.h"
#include <stdlib.h>
/**
 * read_line - reads a line from stdin
 * @buffer: buffer to store line
 * @buff_size: size of buffer
 *
 * Return: void
 */
void read_line(char *buffer, size_t buff_size)
{
	ssize_t bytes;

	if (isatty(fileno(stdin)))
	{
		/* live mode */
		_prompt();
		getline(&buffer, &buff_size, stdin);
	}
	else
	{
		/* piped input */
		write(STDIN_FILENO, "\n", 1);
		bytes = getline(&buffer, &buff_size, stdin);
		if (bytes == -1)
			exit(EXIT_FAILURE);

	}

	if (feof(stdin))
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}
}
