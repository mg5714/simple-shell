#include "shell.h"

/**
 * pprint - print value.
 * @format: string to value
 *
 * Return: void
 */
void pprint(const char *format)
{
	write(STDOUT_FILENO, format, _strlen(format));
}


/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
