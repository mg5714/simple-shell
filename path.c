#include "shell.h"
/**
 * get_path - Searches for and returns the path to a specified command.
 * @cmd: cmd The command to search for.
 *
 * Return: the path to the command if found, or NULL if not found.
 */
char *get_path(char *cmd)
{
	char *path, *path_copy, *dir;
	struct stat st;
	int i;

	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] == '/')
		{
			if (stat(cmd, &st) == 0)
			return (_strdup(cmd));
			return (NULL);
		}
	}
	path = _getenv("PATH");
	if (!path)
	return (NULL);

	dir = strtok(path, ":");
	while (dir != NULL)
	{
		path_copy = malloc(_strlen(dir) + _strlen(cmd) + 2);
		if (path_copy)
		{
			_strcpy(path_copy, dir);
			_strcat(path_copy, "/");
			_strcat(path_copy, cmd);
			stat(path_copy, &st);
			if (stat(path_copy, &st) == 0)
			{
				free(path);
				return (path_copy);
			}
			
			free(path_copy);
			path_copy = NULL;
		}
		dir = strtok(NULL, ":");
	}
		free(path);
		return (NULL);
}
