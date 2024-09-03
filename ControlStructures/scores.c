#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;
	printf("Enter score:\n");
	scanf("%d",&score);

	if(score>=90 && score<=100)
		printf("Your grade is A");
	else if(score>=80 && score<=89)
		printf("Youre grade is B");
	else if (score>=70 &&  score<=79)
		printf("Youre grade is C");
	else if (score>=60 && score<=69)
		printf("Your grade is D");
	else if(score<60)
		printf("Your grade is Fail");
	
	return EXIT_SUCCESS;
}
