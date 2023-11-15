#include "shell.h"

/**
 * argsarray - seperate the buffer input to arg array
 * @buffer: pointer to the buffer
 * Return: array of arguments
 */
char **argsarray(char *buffer)
{
  char **args = (char **) malloc(sizeof(char *) * 64 * 512);
	int i, p, n, sp;

	i = p = n = sp = 0;
	for (i = 0 ; buffer[i]; i++)
	{
		if (buffer[i] != ' ')
		{
			n++;
		}
		else
		{
		        args[p] = (char *) malloc(sizeof(char) * n);
			args[p] = _strncpy(args[p], &buffer[sp], n);
			p++;
			sp = i + 1;
			n = 0;
		}
	}
	if (n > 0)
	{
	        args[p] = (char *) malloc(sizeof(char) * n);
		args[p] = _strncpy(args[p], &buffer[sp], n);
		p++;
	}
	args[p] = NULL;
	return (args);
}
