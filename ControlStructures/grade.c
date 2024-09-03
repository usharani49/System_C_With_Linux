#include<stdio.h>
#include<stdlib.h>

int main()
{
	int marks;
	printf("Enter your marks:\n");
	scanf("%d",&marks);

	if(marks>=90 && marks<=100)
		printf("Grade A\n");
	else if (marks>=80 && marks<=89)
		printf("Grage B\n");
	else if(marks>=70 && marks<=79)
		printf("Grade C\n");
	else if(marks>=60 && marks<=69)
		printf("Grade D\n");
	else
		printf("Fail\n");
	
	return EXIT_SUCCESS;

}
