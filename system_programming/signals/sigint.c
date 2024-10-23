#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h> 


void sigint_handler(int signo)
{
	printf("Caught signal %d(SIGINT), but i'm not terminating" ,signo);
}

int main()
{
	signal(SIGINT,sigint_handler);
	while(1)
	{	
		printf("Press CTRL+C to test SIGINT handling...\n");
		sleep(1);
		printf("I AM STILL RUNNING\n");
	}
	return EXIT_SUCCESS;
}
