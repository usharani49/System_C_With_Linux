#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;

	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	
	printf("Choose one from below\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	
	int op;
	scanf("%d",&op);

	switch(op)
	{
		case 1:
			printf("Addition of %d and %d is %d\n",a,b,a+b);
			break;
		case 2:
			printf("Subtraction of %d and %d is %d\n",a,b,a-b);
			break;
		case 3:
			printf("Multiplication of %d and %d is %d\n",a,b,a*b);
			break;
		case 4:
			printf("Divison of %d and %d is %d\n",a,b,a/b);
			break;
		default:
			printf("You have to choose between the given options\n");
	}
}
