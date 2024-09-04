#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter a positiv number:");
	scanf("%d",&num);

	int tmp=num;
	int sum=0;
	int rem;
	
	int c=0;
	int nc=num;
	while(nc>0){
		nc/=10;
		c++;
	}
	
	nc=num;
	while(nc>0){
		rem=nc%10;
		sum+=pow(rem,c);
		nc/=10;
	}

	if(tmp==sum)
		printf("%d is an armstrong number",sum);
	else
		printf("%d is not an armstrong nubmer",tmp);
	return EXIT_SUCCESS;
}
