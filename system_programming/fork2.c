#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid=fork();
	
	if(pid==0)
	{
		printf("Child process:My parent will terminate soon\n");
		sleep(5);
		printf("Child process: My parent is gone, I am an orphan\n");
	}
	else
	{
		printf("Parent process:I am terminating\n");
		_exit(0);           //doing some work
	}

	return EXIT_SUCCESS;
}
