#include "shell.h"

/* extern char **environ; */
/**
 * print_env - print the current environment variables
 * Return: void;
 */
void print_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);

	/* return; */
}
