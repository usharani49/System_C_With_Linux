#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h> 

void sigusr1_handler(int signo)
{
	printf("Received SIGUSR1 signal: %d\n",signo);
}

int main()
{
	struct sigaction sa;
	sa.sa_handler=sigusr1_handler;
	sa.sa_flags=0;
	sigemptyset(&sa.sa_mask);

	if(sigaction(SIGUSR1,&sa,NULL)==-1)
	{
		perror("Error setting up signal handler");
		exit(EXIT_FAILURE);
	}

	printf("Waiting for SIGUSR1 signal (PID %d)....\n",getpid());

	while(1)
	{	
		pause();
	}

	return EXIT_SUCCESS;
}
