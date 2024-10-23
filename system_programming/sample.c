#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 20

void report_and_exit(char *msg)
{
	perror(msg);
	exit(1);
}


int main(int argc,char *argv[])
{
	int pid;
	char buffer[MAX];
	char write_buf[MAX];
	if(argc!=3)
	{
		printf("Wrong usage\n");
		exit(1);
	}
	int fd[2];
	if(pipe(fd)==-1) report_and_exit("pipe");
	
	if(pid=fork()<0) report_and_Exit("fork");

	else if(pid==0)  //child
	{
		close(fd[1]);
		read(fd[0],buffer,MAX);

		FILE *fp;
		if(fp=fopen(argv[2],"w")==NULL) report_and_exit("fopen");
		fputs(buffer,fp);
		fclose(fp);
		close(fd[0]);
	}
	
	else //parent
	{
		close(fd[0]);
		FILE *fp;
		
		int bytes_read;

		if((fp=fopen(argv[1],"r"))==NULL) report_and_exit("fopen");

		bytes_read = fgets(write_buf,strlen(write_buf),fp);
		if(bytes_read!=0) write_buf[bytes_read]='\0';

		write(fp[1],write_buf,strlen(write_buf)+1);

		fclose(fp);
		close(fp[1]);
	}
}
