#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *thread_function(void *arg)
{
	printf("Hello from thread\n");
	return NULL;
}

int main()
{
	pthread_t thread;

	if(pthread_create(&thread,NULL,thread_function,NULL)!=0)
	{
		printf("Error in creating thread\n");
		return 1;
	}

	if(pthread_join(thread,NULL)!=0)
	{
		printf("Error in joining thread\n");
		return 1;
	}

	printf("Thread Created Successfully \n ");

	return EXIT_SUCCESS;

}
