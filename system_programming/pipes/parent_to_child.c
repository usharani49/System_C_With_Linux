#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

#define BUFFER_SIZE 1024

int main()
{
	int pipefd[2];
	char buf[BUFFER_SIZE];
	pid_t pid;

	if(pipe(pipefd)==-1)
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	pid=fork();
	if(pid==-1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if(pid==0)
	{
		close(pipefd[1]);

		read(pipefd[0],buf,BUFFER_SIZE);

		printf("Child process received: %s\n",buf);

		close(pipefd[0]);
		_exit(EXIT_SUCCESS);
	}

	else
	{
		close(pipefd[0]);

		char msg[]="Hello from parent!";

		write(pipefd[1],msg,sizeof(msg));

		close(pipefd[1]);

		wait(NULL);
	}

	return EXIT_SUCCESS;
}
