#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 5

bool ispalin(int a[],int s)
{
	int st=0;
	int e=s-1;

	while(st<e)
	{
		if(a[st]!=a[e])
		{
			return false;
		}
		st++;
		e--;
	}
	return true;
} 

int main()
{
	int a[MAX];
	printf("Enter upto 5 elements:\n");

	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}

	if(ispalin(a,MAX))
	{
		printf("Array is a palindrome\n");
	}
	else
	{
		printf("Array is not palindrome\n");
	}

	return EXIT_SUCCESS;

}
