#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=5;
	int *iptr;
	int **dptr;

	iptr=&a;

	dptr=&iptr;
	

	printf("Using variable\n");
	printf("The value of a is %d\n",a);
	printf("The address of a is %d\n",&a);
	//printf("The value of *a is %d\n",*a);
	

	printf("Using iptr\n");
	printf("The value of iptr is %d\n",iptr);
	printf("The address of iptr is %d\n",&iptr);
	printf("The value of *iptr is %d\n",*iptr);


	printf("Using dptr\n");
	printf("The value of dptr is %d\n",dptr);
	printf("The address of dptr is %d\n",&dptr);
	printf("The value of *dptr is %d\n",*dptr);
	printf("The value of **dptr is %d\n",**dptr);

	return EXIT_SUCCESS;
}
