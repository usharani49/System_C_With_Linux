#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
	printf("Before excev\n");

	char *argv ={"ls","-l","/home","NULL"};

	execv("bin/ls",argv);

	fprintf(stderr,"excel failed: %s\n",strerror(errno));

	return 1;
}
