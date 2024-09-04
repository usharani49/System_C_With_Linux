#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
int main()
{
	int a[MAX]={1,2,3,4,5,6,7,8,9,10};
	printf("Natural numbers are:\n");
	for(int i=0;i<MAX;i++){
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}
