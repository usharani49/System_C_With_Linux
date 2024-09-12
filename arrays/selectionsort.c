#include<stdio.h>
#include<stdlib.h>
#define MAX 5


int main()
{
	int a[MAX];
	printf("Enter elemets upto 5:\n");

	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}


	for(int i=0;i<MAX-1;i++)
	{
		int min=i;
		for(int j=i+1;j<MAX;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}

		if(min!=i)
		{
			int tmp=a[min];
			a[min]=a[i];
			a[i]=tmp;
		}
	}


	printf("After sorting the  element using selection sort:\n");
	for(int i=0;i<MAX;i++)
	{

		printf("%d ",a[i]);
	}
	
	printf("\n");

	return EXIT_SUCCESS;
}
