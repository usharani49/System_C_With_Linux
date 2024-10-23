#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int signo)
{
	if(signo==SIGINT)
	{
		printf("\nCaught signalno %d (SIGINT) but i'm not terminating\n",signo);
	}
	else if(signo==SIGTERM)
	{
		printf("\nCaught signal %d (SIGTERM) & I will terminate now\n",signo);
		_exit(0);
	}
}
int main()
{
	signal(SIGINT,signal_handler);
	signal(SIGTERM,signal_handler);

	while(1)
	{
		sleep(2);
		printf("\nProgram is running. Press CTRL+C (SIGNINT) or SIGTERM to test...\n");
	}
	return 0;
}
