#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

int main(){
	int radius;

	printf("Enter radius of the circle: ");
	scanf("%d",&radius);

	printf("Area of Circle:%d\n",PI *radius *radius);
	printf("Circumference of Circle:%d\n",2*PI*radius);

	return EXIT_SUCCESS;

}
