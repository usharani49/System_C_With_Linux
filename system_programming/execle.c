#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
	char *env[] = {"bin/ls"};

	printf("Before excele\n");

	execle("/bin/ls","ls","-l",(char *)0,env);

	fprintf(stderr,"excel failed: %s\n",strerror(errno));

	return 1;
}
