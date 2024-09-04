#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
int main()
{
	int a[10];
	for(int i=0;i<MAX;i++){
		a[i]=i+1;
	}
	printf("Natural numbers are:\n");
	for(int i=0;i<MAX;i++){
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}
