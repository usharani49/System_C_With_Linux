#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);

	int sqnum=num*num;
	
	int n=num;
	int c=0;
	while(n!=0){
		n/=10;
		c++;
	}
	
	int res=pow(10,c);
	int ans=sqnum % res;

	if(ans==num)
		printf("%d is an automorphic number\n",num);
	else
		printf("%d is not an automorphic number\n",num);
	
	printf("n %d",n);
	printf("res %d",res);

	return EXIT_SUCCESS;
}
