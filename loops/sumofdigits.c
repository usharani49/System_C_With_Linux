#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter a positive integer:");
	scanf("%d",&num);

	int n=num;
	int sum=0;
	for(;num!=0;num/=10){
		sum+= num%10;
	}
	printf("The sum of the digits %d is:%d\n",n,sum);

	return EXIT_SUCCESS;
}
