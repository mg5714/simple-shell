#include "shell.h"
#include <stddef.h>

/**
 * main - entry point.
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
size_t buff_size = BUFFER_SIZE;
char buffer[BUFFER_SIZE];
char *cmd;

void pprint(const char *format);
(void)argc;


_prompt();
while (1)
{
read_line(buffer, buff_size);
remove_newline(buffer);
cmd = "command ece";

get_path(cmd);
execute_command(buffer, argv);

_prompt();
}
return (0);
}
