#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
	int a[MAX];
	printf("Enter array elements:\n");
	for(int i=0;i<MAX;i++){
		scanf("%d",&a[i]);
	}
	printf("Array elements are\n");
	for(int i=0;i<MAX;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
