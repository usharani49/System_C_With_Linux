#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid=fork();
	if(pid==-1)
	{
		perror("Error in fork\n");
	}
	if(pid==0)
	{
		printf("Child process\n");
		_exit(0);
	}
	else
	{
		printf("Parent process\n");
		sleep(10);           //doing some work
	}

	return EXIT_SUCCESS;
}
