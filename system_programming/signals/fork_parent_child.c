#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void sigusr1_handler(int signo)
{
	printf("Child received SIGUSR1 signal: %d\n",signo);
}

int main()
{
	pid_t pid;

	pid=fork();

	if(pid<0)
	{
		perror("fork failed\n");
		exit(EXIT_FAILURE);
	}
	else if(pid==0)
	{
		struct sigaction sa;
		sa.sa_handler=sigusr1_handler;
		sa.sa_flags=0;
		sigemptyset(&sa.sa_mask);

		if(sigaction(SIGUSR1,&sa,NULL)==-1)
		{
			perror("Error setting up signal handler\n");
			exit(EXIT_FAILURE);
		}

		printf("Child process waiting for SIGUSR1 signal (PID %d)....\n",getpid());

		while(1)
		{
			pause();
		}
	}
	else
	{
		sleep(2);

		printf("Parent sending SIGUSR1 signal to child (PID %d)\n",pid);


		if(kill(pid,SIGUSR1)==-1)
		{
			perror("Error sending SIGUSR1 signal\n");
			exit(EXIT_FAILURE);
		}

		printf("Parent process done\n");
		exit(EXIT_SUCCESS);
	}

	return EXIT_SUCCESS;
}
