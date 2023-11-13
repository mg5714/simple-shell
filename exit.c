#include "shell.h"

/**
 * check_exit - check if the command exit occured
 * @buffer: pointer to the shell buffer
 * Return: void
 */
void check_exit(char *buffer)
{
	char *s = "exit";
	int i = 0;

	while (*s != '\0')
	{
		if (*s != buffer[i])
			return;

		s++;
		i++;

	}

	fflush(stdin);
	fflush(stdout);
	fflush(stderr);
	exit(0);

}
