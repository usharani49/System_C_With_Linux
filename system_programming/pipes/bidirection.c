#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

#define BUFFER_SIZE 1024

int main()
{
	int pipefd1[2];
	int pipefd2[2];
	pid_t pid;
	char parent_msg[]="Hello from parent!";
	char child_msg[BUFFER_SIZE];
	char modified_msg[BUFFER_SIZE];

	if(pipe(pipefd1)==-1)
	{
		perror("pipe1");
		exit(EXIT_FAILURE);
	}
	
	if(pipe(pipefd2)==-1)
	{
		perror("pipe2");
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
		close(pipefd1[1]);
		close(pipefd2[0]);

		read(pipefd1[0],child_msg,BUFFER_SIZE);
		printf("Child process received: %s\n",child_msg);

		snprintf(modified_msg,BUFFER_SIZE,"Message from child: %s",child_msg);

		write(pipefd2[1],modified_msg,strlen(modified_msg)+1);

		close(pipefd1[1]);
		close(pipefd2[0]);

		exit(EXIT_SUCCESS);
	}

	return EXIT_SUCCESS;
}
