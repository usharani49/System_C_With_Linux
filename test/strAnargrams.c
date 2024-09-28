#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100

void sortString(char *str)
{
    int l=strlen(str);
    for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
                {
                    if(str[i]>str[j])
                    {
                        char temp=str[i];
                        str[i]=str[j];
                        str[j]=temp;
                    }
                }
        }
}

bool areAllAnargrams(char *str)
{
    char *tok=strtok(str,",");
    char sortedWord[MAX];

    if(tok==NULL)
    {
        return false;
    }
    strcpy(sortedWord,tok);
    sortString(sortedWord);

    while((tok=strtok(NULL,","))!=NULL)
        {
            char temp[MAX];
            strcpy(temp,tok);
            sortString(temp);

            if(strcmp(temp,sortedWord)!=0)
            {
                return false;
            }
        }
    return true;
}

int main()
{
    char input[MAX];

    printf("Enter comma separated  elements in a string:\n");
    fgets(input,MAX,stdin);
    input[strcspn(input,"\n")]='\0';
    
    if(areAllAnargrams(input))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return EXIT_SUCCESS;
}
