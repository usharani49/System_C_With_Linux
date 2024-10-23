#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid;

	pid=fork();

	if(pid<0)
	{
		perror("Fork Failed\n");
		exit(EXIT_FAILURE);
	}

	else if(pid==0)
	{
		printf("Hello from child\n");
	}

	else
	{
		printf("Hello from parent\n");
	}

	return EXIT_SUCCESS;
}
