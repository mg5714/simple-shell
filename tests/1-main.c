#include "../shell.h"

int main(void)
{
	char *output, *buf, *bin,**args;
	char *p1, *p2;
	
	output = malloc(sizeof(char) * 16);
	buf = "ls -l";
	args = argsarray(buf);
	
	bin = "/bin/";
	p1 = bin;
	p2 = output;
	while (*p1 != '\0')
	{
		*p2 = *p1;
		p1++;
		p2++;
	}

	p1 = args[0];
	while (*p1 != '\0')
	{
		*p2 = *p1;
		p1++;
		p2++;
	}
	*p2 = '\0';

	printf("%s\n", output);
	return (0);
}
