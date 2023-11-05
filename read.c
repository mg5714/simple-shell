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
	getline(&buffer, &buff_size, stdin);
	if (feof(stdin))
	{
		pprint("\n");
		exit(EXIT_SUCCESS);
	}
}
