#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int sort(int[]);
int main()
{
	int a[MAX];
	int i;
	printf("Enter 5 elemetns:\n");
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}
	
	sort(a);

	return EXIT_SUCCESS;
}

int sort(int a[])
{
	int i;
	int j;
	int temp;

	for(i=0;i<MAX;i++)
	{
		for(j=i+1;j<MAX;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d ",a[i]);
	}
}

