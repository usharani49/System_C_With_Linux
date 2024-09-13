#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int occurence(int[]);

int main()
{
	int a[MAX];
	printf("Enter an array to count occurence of each element:\n");
	for(int i=0;i<MAX;i++)
		scanf("%d",&a[i]);
	
	occurence(a);

	return EXIT_SUCCESS;
}

int occurence(int a[])
{
	int i;
	int j;
	int c;
	int v[MAX]={0};
	
	for(i=0;i<MAX;i++)
	{
		if(v[i]==1)
			continue; 

		c=1;
		for(j=i+1;j<MAX;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				v[j]=1;
			}
		}
		printf("element %d - count %d\n",a[i],c);
	}
}
