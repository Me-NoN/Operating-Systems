//get pid program
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
	pid_t pid=fork();
	if (pid==0)
	{
		printf("PID:%d\nPPID:%d\n",getpid(),getppid());
		exit(EXIT_SUCCESS);
	}
	else if (pid>0)
	{
		wait(NULL);
		printf("Child Finished\n");
	}
	else
		printf("Unable to Create");
	return EXIT_SUCCESS;
}
