#include<stdio.h>
#include<stdlib.h>

int main(){
	int score;
	printf("Enter your score:\n");
	scanf("%d",&score);
	
	char grade;
	printf("Enter your grade(A,B,C,D,or F): \n");
	scanf(" %c",&grade);

	printf("Your score is %d and Grade is %c\n",score,grade);

	return EXIT_SUCCESS;
}
