#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	int b;
	
	printf("Enter two integers:\n");
	scanf("%d%d",&a,&b);

	printf("The Addition of %d and %d is %d\n",a,b,a+b);
	printf("The Subtraction of %d and %i is %i\n",a,b,a-b);
	printf("The Multiplication of %d and %i is %i\n",a,b,a*b);
	printf("The Division of %d and %d is %i\n",a,b,a/b);
	printf("The Remainder of %d and %d is %d\n",a,b,a%b);

	return EXIT_SUCCESS;
}
