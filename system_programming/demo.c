#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Hello from fork\n");
	fork();
	printf("Testing fork from child\n");

	return EXIT_SUCCESS;
}
