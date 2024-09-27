#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
	printf("Before excel\n");

	execl("/bin/ls","ls","-l",(char *)0);

	fprintf(stderr,"excel failed: %s\n",strerror(errno));

	return 1;
}
