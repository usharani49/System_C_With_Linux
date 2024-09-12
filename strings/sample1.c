#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

int main()
{
	char ch[MAX];
	int len;

	printf("Enter a string:\n");
	if(fgets(ch,MAX,stdin)!=NULL)
	{
		len=strlen(ch);

		if(ch[len-1]=='\n')
			ch[len-1]='\0';
		printf("The input string is ");
		if(!fputs(ch,stdout))
		{
			printf("Enter in fputs\n");
			return EXIT_SUCCESS;
		}
		return EXIT_SUCCESS;
	}
	else
	{
		printf("Eroor in fgets\n");

		return EXIT_FAILURE;
	}
}
