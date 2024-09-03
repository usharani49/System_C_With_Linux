#include<stdio.h>
#include<stdlib.h>

int main(){
	float wgt;
	float height;

	printf("Enter weight in KG:");
	scanf("%f",&wgt);
	fflush(stdin);
	printf("\nEnter height in MTS:");
	scanf("%f",&height);

	float bmi= wgt/(height*height);

	printf("Your BMI is : %f\n",bmi);

	return EXIT_SUCCESS;
}

