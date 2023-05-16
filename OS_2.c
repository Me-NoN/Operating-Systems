//Fork Program
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
void child()
{
	printf("Hello World\n");
}
void parent()
{
	printf("main\n");
}
int main()
{
	pid_t pid=fork();
	if (pid==0)
	{
		child();
		exit(EXIT_SUCCESS);
	}
	else if (pid>0)
	{
		parent();
	}
	else
		printf("Unable to Create");
	return EXIT_SUCCESS;
}
