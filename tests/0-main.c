#include "../shell.h"

int main(void)
{
	char *str = "hello there";
	char **args = argsarray(str);
	int i;

	for (i = 0 ; args[i]; i++)
		printf("%i: %s\n", i,args[i]);

	return (0);
}
