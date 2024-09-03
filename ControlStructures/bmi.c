#include<stdio.h>
#include<stdlib.h>

int main()
{
	float weight;
	float height;

	printf("Enter your height:\n");
	scanf("%f",&weight);

	printf("Enter your weight:\n");
	scanf("%f",&height);

	float bmi=weight/(height*height);

	if(bmi<18.5)
		printf("Your bmi score is %f and you are Underweight\n",bmi);
	else if(bmi>=18.5 && bmi<=24.9)
		printf("Your bmi score is %f and you are Normal Weight\n",bmi);
	else if(bmi>25 && bmi<29.9)
		printf("Your bmi score is %f and you are Over Weight\n",bmi);
	else if(bmi>=30)
		printf("Your bmi score is %f and you have Obesity\n",bmi);
	
	return EXIT_SUCCESS;

}
