#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
	printf("Before excelp\n");

	execlp("ls","-l",(char *)0);

	fprintf(stderr,"excel failed: %s\n",strerror(errno));

	return 1;
}
