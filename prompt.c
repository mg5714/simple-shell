#include "shell.h"
/**
 * _prompt - print prompt.
 *
 * Return: void
 */
void _prompt(void)
{
    char *prompt = "$ ";
    write(STDOUT_FILENO, prompt, _strlen(prompt));
}
