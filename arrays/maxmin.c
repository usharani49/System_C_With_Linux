#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
	int a[MAX];
	printf("Enter elements upto 10:\n");
	for(int i=0;i<MAX;i++){
		scanf("%d",&a[i]);
	}

	int max=a[0];
	int min=a[0];
	
	for(int i=0;i<MAX;i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	
	printf("Maximum is %d\n",max);
	printf("Minimum is %d\n",min);

	return EXIT_SUCCESS;
}
