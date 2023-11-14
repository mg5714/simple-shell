#include "shell.h"

char *_strsep(char **stringp, const char *delim)
{
	char *start, *end;

	start = *stringp;
	if (!start)
	{
		return (NULL);
	}
	
	end = _strpbrk(start, delim);

	if (!(*end))
	{
		*end = '\0';
		*stringp = end + 1;
	}
	else
	{
		*stringp = NULL;
	}

	return (start);
}
