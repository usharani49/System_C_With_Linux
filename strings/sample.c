#include<stdio.h>
#include<stdlib.h>
#define MAX 500

int main()
{
	char ch[MAX];
	

	printf("Enter a string:\n");
	scanf("%[^\n]s",ch);

	printf("The input string is %s\n",ch);

	return EXIT_SUCCESS;
}
