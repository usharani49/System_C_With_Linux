#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int a[MAX];
	printf("Enter elements upto 5:");
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);		
	}
	
	int sum=0;
	for(int i=0;i<MAX;i++){
		sum+=a[i];
	}

	printf("Sum of the elements:%d\n ",sum);
	printf("Average of the elemets:%d\n ",sum/MAX);

	return EXIT_SUCCESS;
}
