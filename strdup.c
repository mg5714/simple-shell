#include "shell.h"

/**
* _strdup - fun returns a pointer to a newly allocated space in memory.
*@str: string
* Return:pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	int i, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[len] = '\0';

	return (ptr);
}
