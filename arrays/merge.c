#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int main()
{

	int a[MAX];
	printf("Enter elements of array 1  upto 5:\n");
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}


	int b[MAX];
	printf("Enter elements of array 2  upto 5:\n");
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&b[i]);
	}

	int c[MAX+MAX];

	for(int i=0;i<MAX;i++)
	{
		 c[i]=a[i];
	}

	for(int i=MAX;i<MAX+MAX;i++)
	{
		c[i]=b[i-MAX];
	}

	printf("Merged array :\n");
	for(int i=0;i<MAX+MAX;i++)
	{

		printf("%d ",c[i]);
	}

	return EXIT_SUCCESS;
}
