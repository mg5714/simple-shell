#include "shell.h"

/**
 * _strcat - This function appends the src
 * string to the dest string
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to the whole string
 */
char *_strcat(char *dest, char *src)
{
	char *p1 = dest;

	while (*p1 != '\0')
		p1++;

	while (*src != '\0')
	{
		*p1 = *src;
		p1++;
		src++;
	}

	*p1 = '\0';
	return (dest); }
