#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

int main()
{
	pid_t target_pid;
	 
	printf("Enter the target PID: ");
	scanf("%d",&target_pid);

	if(kill(target_pid,SIGUSR1)==-1)
	{
		perror("Error sending SIGUSR1 signal");
		exit(EXIT_FAILURE);
	}

	printf("SIGUSR1 signal sent to process %d\n",target_pid);

	return EXIT_SUCCESS;
}
