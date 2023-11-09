#include "shell.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	for (; dest[i] != '\0'; i++)
		;

	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++; i++;
	}

	dest[i] = '\0';

	return (dest);
}
