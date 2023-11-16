#include "shell.h"
#include <stdlib.h>


void rstrip(char *buffer);
/**
 * read_line - reads a line from stdin
 * @buffer: buffer to store line
 * @buff_size: size of buffer
 * @argv: array of command line arguments
 * Return: void
 */
void read_line(char *buffer, size_t buff_size, char **argv)
{
	ssize_t bytes;
	char *lstrip;

	if (isatty(fileno(stdin)))
	{
		/* live mode */
		_prompt();
		getline(&buffer, &buff_size, stdin);
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
	}
	else
	{
		/* piped input */
		write(STDIN_FILENO, "\n", 1);
		while ((bytes = getline(&buffer, &buff_size, stdin)) > 0)
		{
			remove_newline(buffer);
			for (lstrip = buffer; *lstrip == ' '; lstrip++)
				;
			if (_strlen(lstrip) == 0)
				break;

			rstrip(lstrip);
			check_builtins(lstrip);
			execute_command(lstrip, argv);
		}
		exit(0);

	}

}

/**
 * rstrip - delete whitespaces in the right side of the string
 * @buffer: pointer to the buffer used
 * Return: void
 */
void rstrip(char *buffer)
{
	int i, len;

	len = _strlen(buffer);
	if (len < 1)
		return;

	if (buffer[len - 2] != ' ')
		return;

	for (i = _strlen(buffer) - 2; i >= 0; i--)
	{
		if (*(buffer + i) != ' ')
		{
			*(buffer + i + 1) = '\0';
			return;
		}
	}
}
