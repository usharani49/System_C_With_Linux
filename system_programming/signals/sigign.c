#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

int main()
{	
	signal(SIGINT,SIG_IGN);

	while(1)
	{
		printf("Running.... Press CTRL+C but it will be ignored(SIG_IGN)\n");
		sleep(1);
	}
	
	return EXIT_SUCCESS;
}	
