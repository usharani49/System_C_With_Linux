#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void replaceFirstOccurence(char str[],char toReplace,char replaceWith)
{
    for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]==toReplace)
            {
                str[i]=replaceWith;
                break;
            }
        }
}

int main()
{
    char str[MAX];
    printf("Enter a string:");
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]='\0';

    char toReplace;
    char replaceWith;

    printf("\nEnter a character to replace:");
    scanf("%c",&toReplace);
    getchar();
    
    printf("\nEnter a character to replace with:");
    scanf("%c",&replaceWith);
    getchar();

    replaceFirstOccurence(str,toReplace,replaceWith);

    printf("\nAfter replacing %c with %c, the string is\n %s",toReplace,replaceWith,str);
    
    return EXIT_SUCCESS;    
}
