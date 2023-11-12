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




/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0')
;
return (dest);
}


/**
 * _strcmp -  function that compares two strings.
 * @s1: string tocompared.
 * @s2: string for comparation.
 * Return: diff.
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
