#include<stdio.h>
#include<stdlib.h>

int main()
{
	int days;

	printf("Enter number of days:\n");
	scanf("%d",&days);
	
	int weeks=days/7;
	int tdays=days%7;

	printf("%d days are %d week, %d days\n",days,weeks,tdays);

	return EXIT_SUCCESS;
}
