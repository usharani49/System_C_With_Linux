#include<stdio.h>
#include<stdlib.h>

int main(){
	int a=10;
	int b=20;
	int ret_val; 
	ret_val = printf("The sum of %d and %d is %d\n",a,b,a+b);
	
	if(ret_val<0){
		printf("Error while priting\n");
		return EXIT_FAILURE;
	}
	printf("SUCCESS\n");
	return EXIT_SUCCESS;
} 
