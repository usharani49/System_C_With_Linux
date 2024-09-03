#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	int b;
	int c;

	printf("Enter 3 numbers:\n");
	scanf("%d%d%d",&a,&b,&c);

	int result= (a>b)?(a>c?a:c):(b>c?b:c);

	printf("Maximum of %d,%d, and %d is %d\n",a,b,c,result);

	return EXIT_SUCCESS;
}
