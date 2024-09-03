#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter a numbers:\n");
	scanf("%d",&num);

	if(num%2==0)
		printf("%d is even number\n",num);
	else
		printf("%d is odd number\n",num);
	
	return EXIT_SUCCESS;
}
