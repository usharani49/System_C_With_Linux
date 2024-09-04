#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int a[MAX];
	printf("Enter 5  array elements:\n");
	for(int i=0;i<MAX;i++){
		scanf("%d",&a[i]);
	}
	printf("Array elements are(using index):\n");
	for(int i=0;i<MAX;i++){
		printf("%d ",a[i]);
	}
	printf("\nArray elements (using address):\n");
	for(int i=0;i<5;i++){
		printf("%d ",*(a+i));
	}
	return EXIT_SUCCESS;
}
