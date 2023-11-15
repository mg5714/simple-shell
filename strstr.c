#include "shell.h"

/**
 * *_strstr - locates a substring
 * @str: string to search in
 * @substr: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *str, char *substr)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; substr[j] != '\0'; j++)
		{
			if (str[i + j] != substr[j])
				break;
		}
		if (!substr[j])
			return (&str[i]);
	}
	return (NULL);
}
