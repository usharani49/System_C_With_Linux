#include<stdio.h>
#include<stdlib.h>

int main()
{
	int temp;
	printf("Enter your room temperature:\n");
	scanf("%d",&temp);

	if(temp>30)
		printf("It;s hot oustside, stay hydrated!\n");
	if(temp>=20 && temp<=30)
		printf("The weather is nice and warm\n");
	if(temp>=10 && temp<=19)
		printf("It's a bit chilly, wear a jacket\n");
	if(temp<10)
		printf("It's cold outside, stay warm!\n");

	return EXIT_SUCCESS;
}
