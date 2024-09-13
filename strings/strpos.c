#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int substrpos(const char *str,const char *substr)
{
	char *pos=strstr(str,substr);
	if(pos!=NULL)
	{
		return pos-str;
	}
	return -1;
}
int main()
{
	char str[MAX];
	char substr[MAX];

		
	printf("Enter a string:\n");
	fgets(str,sizeof(str),stdin);

	if(str[strcspn(str,"\n")]!='\0')
		str[strcspn(str,"\n")]='\0'; 

	
	printf("Enter a substring:\n");
	fgets(substr,sizeof(substr),stdin);

	if(str[strcspn(substr"\n")]!='\0'
		substr[strcspn(substr,"\n")]='\0';
		 

	
	return EXIT_SUCCESS;
}
