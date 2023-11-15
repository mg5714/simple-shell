#include "shell.h"

/**
 * _strtok - tokenize a string to multiple strings
 * @str: string to tokenize
 * @delimiters: delimiters to cut the original string
 * Return: multiple strings
 */
char *_strtok(char *str, const char *delimiters)
{
	static char *tokens;
	char *token_start;
	int is_delimiter;
	size_t i;

	if (str != NULL)
		tokens = str;
	if (tokens == NULL || *tokens == '\0')
		return (NULL);
	token_start = tokens;
	while (*tokens)
	{
		is_delimiter = 0;
		for (i = 0; delimiters[i] != '\0'; ++i)
		{
			if (*tokens == delimiters[i])
			{
				is_delimiter = 1;
				break;
			}
		}

		if (is_delimiter)
		{
			*tokens = '\0';
			++tokens;
			return (token_start);
		}
		++tokens;
	}
	return (token_start);
}

