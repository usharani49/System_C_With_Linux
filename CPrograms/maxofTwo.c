#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	int b;

	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);

	int result=(a>b)?a:b;

	printf("Maximum of %d and %d is %d\n",a,b,result);

	return EXIT_SUCCESS;
}

