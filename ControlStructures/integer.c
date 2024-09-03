#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);

	if(num<0)
		printf("You entered negativ number %d\n",num);
	else if(num==0)
		printf("You enterd zero number %d\n",num);
	else
		printf("You entered postive number %d\n",num);
	
	return EXIT_SUCCESS;

}
