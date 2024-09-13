#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 5

int main()
{
	int a[MAX];
	int i;

	printf("Enter upto 5 elements:\n");
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}

	int max1;
	int max2;

	max1=max2=INT_MIN;

	for(i=0;i<MAX;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]<max1)
		{
			max2=a[i];
		}
	}

	printf("Second largest: %d\n",max2);
	return EXIT_SUCCESS;
}
