 #include "shell.h"

/**
 * remove_newline - removes newline character from string
 * @buffer: string
 *
 * Return: the pointer
 */
void *remove_newline(char *buffer)
{
buffer[strcspn(buffer, "\n")] = '\0';
return (buffer);
}

/**
 * execute_command - executes a command
 * @buffer: buffer with the command to execute
 *
 * Return: void
 */
void execute_command(char *buffer)
{
char *args[BUFFER_SIZE / 2];
pid_t pid = fork();

if (pid < 0)
{
perror("fork() error");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
args[0] = buffer;
args[1] = NULL;

execvp(args[0], args);
 /* execve(args[0], args, NULL); */

perror("execve() error");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
