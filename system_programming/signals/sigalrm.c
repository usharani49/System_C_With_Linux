#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void sigalrm_handler(int signo)
{
	printf("\nALARM RECEIVED! Time's up after 5seconds\n");
}
int main()
{
	signal(SIGALRM,sigalrm_handler);

	printf("\nSetting alarm for 5 seconds\n");
	alarm(5);

	while(1)

	{
		printf("\nWaiting for the alarm...\n");
		sleep(1);
	}
	return EXIT_SUCCESS;
}
