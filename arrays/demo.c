#include<stdio.h>
#define MAX 5

int main()
{
	int arr1[MAX]={1,2};
	int arr2[]={1,5,6,4,6};
	int arr3[MAX];

	printf("%p %p %p\n",arr1,&arr1,&arr1[0]);

	printf("\n \n");

	return 0;
}
