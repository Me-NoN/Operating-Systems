//get pid program
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void main()
{
	execlp("./OS_4.out","OS_5.c",NULL);
}
