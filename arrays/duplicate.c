#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void duplicate(int[]);

int main()
{

	int a[MAX];
	printf("Enter upto 10 elements:\n");
	
	int i;
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}


	duplicate(a);
	return EXIT_SUCCESS;
}

void duplicate(int a[])
{
	int i;
	int j;
	int isDup;

	printf("Non-duplicate elements:\n");
	for(i=0;i<MAX;i++)
	{
		isDup=0;
		for(j=0;j<MAX;j++)
		{
			if(i!=j && a[i]==a[j])
			{
				isDup=1;
				break;
			}
		}
		if(!isDup)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
