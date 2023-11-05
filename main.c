#include "shell.h"

/**
 * main - entry point.
 *
 * Return: 0 on success
 */
int main(void)
{
size_t buff_size = BUFFER_SIZE;
char buffer[BUFFER_SIZE];
void pprint(const char *format);

_prompt();
while (1)
{
read_line(buffer, buff_size);
remove_newline(buffer);
execute_command(buffer);

_prompt();
}
return (0);
}
