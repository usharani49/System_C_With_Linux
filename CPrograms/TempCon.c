#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float celsiusTemp;

	printf("Enter celsius Temperature(C): \n");
	scanf("%f",&celsiusTemp);
	
	float fahrenheitTemp = celsiusTemp * 9/5  + 32;

	printf("Fahrenheit Temperature is %f\n",fahrenheitTemp);
	
	float fahreTmp;
	printf("Enter fahrenheit Temperature(F): \n");
	scanf("%f",&fahreTmp);

	float celTemp = (fahreTmp -32)* 5/9;

	printf("Celsius Temperature is %f\n",celTemp);

	return EXIT_SUCCESS;
}
