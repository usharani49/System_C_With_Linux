#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int signo)
{
	printf("Caught signalno  %d\n",signo);
}
int main()
{
	signal(SIGQUIT,signal_handler);
	signal(SIGINT,signal_handler);
	while(1)
	{
		sleep(2);
		printf("signal demo: while loop\n");
	}
	return 0;
}
