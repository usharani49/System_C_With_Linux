#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"Usage %s <number of children>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	int n=atoi(argv[1]);
	pid_t pid;

	for(int i=0;i<n;i++)
	{
		pid=fork();

		if(pid<0)
		{
			perror("Fork failed\n");
			exit(EXIT_FAILURE);
		}

		else if(pid==0)
		{
			printf("Child process %d: My PID is %d, and my parent's PID is %d\n",i+1,getpid(),getppid());
			exit(EXIT_SUCCESS);
		}

		for(int i=0;i<n;i++)
		{
			wait(NULL);
		}

		printf("All children have terminated\n");
	}
	return EXIT_SUCCESS;
}
