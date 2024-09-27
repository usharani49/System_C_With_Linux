#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd;

	fd=open("ex.txt",O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if(fd==-1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	} 

	char *buf="Hello World";

	write(fd,buf,13);

	close(fd);

	return EXIT_SUCCESS;
}
