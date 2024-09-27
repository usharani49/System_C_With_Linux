#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void rmaltch(char *str)
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
        {
            if(i%2==0)
            {
                str[j++]=str[i];
            }
        }
    str[j]='\0';
}

int main()
{
    char str[MAX];
    printf("Enter a string:");
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]='\0';

    rmaltch(str);
    printf("\nThe string is: %s\n",str);
    return EXIT_SUCCESS;
}
