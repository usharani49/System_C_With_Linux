#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

void parse_input(int argc,char *argv[],int *a,int *n)
{
	*n = argc-1;
	for(int i=0;i<*n;i++)
	{
		a[i]=atoi(argv[i+1]);
	}
}

int calcps(int *a,int s,int e)
{
	int sum=0;
	for(int i=s;i<e;i++)
	{
		s+=a[i];
	}
	return s;
}

int main(int argc,char *argv[])
{
	if(argc<3)
	{
		fprintf(stderr,"Usage %s <array_elements>\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	int n;
	int a[argc-1];
	parse_input(argc,argv,a,&n);

	int max_process=3;
	int num_process = (n<max_process)?n:max_process;
	int chunk_size = n/num_process;
	int rem = n%num_process;

	pid_t pids[num_process];
	int pipefds[num_process][2];

	for(int i=0;i<num_process;i++)
	{
		if(pipe(pipefds[i])==-1)
		{
			perror("pipe failed\n");
			exit(EXIT_FAILURE);
		}

		pids[i]=fork();

		if(pids[i]<0)
		{
			perror("Fork failed\n");
			exit(EXIT_FAILURE);
		}

		if(pids[i]==0)
		{
			close(pipefds[i][0]);

			int s=i*chunk_size;
			int e=(i==num_process-1)?(s+chunk_size+rem):(s+chunk_size);

			int ps=calcps(a,s,e);

			write(pipefds[i][1],&ps,sizeof(int));
			close(pipefds[i][1]);

			exit(EXIT_SUCCESS);
		}

		else
		{
			close(pipefds[i][1]);
		}

	}
	int ts=0;
	for(int i=0;i<num_process;i++)
	{
		int ps;
		
		waitpid(pids[i],NULL,0);

		read(pipefds[i][0],&ps,sizeof(int));
		close(pipefds[i][0]);

		ts+=ps;
	}

	printf("Total sum: %d\n",ts);
	
	return EXIT_SUCCESS;
}
