#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int a[MAX];
	printf("Enter elements upto 5:\n");
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}

	int ele;
	int c=0;
	printf("Enter an element to search in the array:\n");
	scanf("%d",&ele);

	for(int i=0;i<MAX;i++)
	{
		if(a[i]==ele)
		{
			printf("%d is found at index %d\n",ele,i+1);
			c+=1;
			break;
		}
	}
	
	if(!c)
		printf("Element not found\n");
	return EXIT_SUCCESS;
}
