#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int main()
{
	int a[MAX];
	printf("Enter elements upto 5:\n");
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Reversed elements:\n");
	for(int i=MAX-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}
