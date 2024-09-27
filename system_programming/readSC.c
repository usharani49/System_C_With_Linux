#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd;
	char buf[1024];

	fd=open("ex.txt",O_RDONLY);
	
	if(fd==-1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	} 	
	
	ssize_t byteRead = read(fd,buf,sizeof(buf));

	
	if(byteRead==-1)
	{
		perror("read");
		close(fd);
		exit(EXIT_FAILURE);
	}

	printf("Read %zd bytes: %s\n",byteRead,buf);

	close(fd);

	return EXIT_SUCCESS;
}
