#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main()
{
	double num;
	printf("Enter a positive integer:");
	scanf("%lf",&num);
	
	double sqi;
	sqi=sqrt(num);
	double rnd;
	rnd=round(sqi);
	printf("nearest square root: %.0lf\n",rnd*rnd);

	return EXIT_SUCCESS;
}
