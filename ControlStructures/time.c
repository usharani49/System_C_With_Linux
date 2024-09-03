#include<stdio.h>
#include<stdlib.h>
#define MIN 60
int main()
{
	int min;
	printf("Enter time in minutes:\n");
	scanf("%d",&min);

	int tothrs = min /60; 
	int minutes = min % 60;

	printf("%d minutes is %d hours and %d minutes\n",min,tothrs,minutes);

	return EXIT_SUCCESS;
}
