#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int main()
{
	int a[MAX];
	printf("Enter an array to count occurence of each element:\n");
	for(int i=0;i<MAX;i++)
		scanf("%d",&a[i]);

	int cnt=0;
	for(int i=0;i<MAX;i++)
	{
		if(!a[i])
		{
			a[i]=cnt++;
		}
		printf("%d %d",a[i],cnt);
	} 

	return EXIT_SUCCESS;
}
