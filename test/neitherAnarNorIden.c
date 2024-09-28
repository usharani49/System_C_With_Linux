#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

void sortedString(char *str)
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

void uniqWords(char *str)
{
    char *words[MAX];
    char sortedWords[MAX][MAX];
    int cnt[MAX]={0};
    int idx=0;

    char *tok=strtok(str,",");
    while(tok!=NULL)
        {
            words[idx]=tok;
            strcpy(sortedWords[idx],tok);
            sortedString(sortedWords[idx]);
            cnt[idx]=1;
            idx++;
            tok=strtok(NULL,",");
        }

    for(int i=0;i<idx;i++)
        {
            for(int j=i+1;j<idx;j++)
                {
                    if(strcmp(sortedWords[i],sortedWords[j])==0)
                    {
                        cnt[i]++;
                        cnt[j]=-1;
                    }
                }
        }

    printf("UNIQUE WORDS: ");
    int isFirst=1;
    for(int i=0;i<idx;i++)
        {
            if(cnt[i]==1)
            {
                if(!isFirst)
                {
                    printf(",");
                }
                printf("%s",words[i]);
                isFirst=0;
            }
        }
    printf("\n");
}

int main()
{
    printf("Enter a string:\n");
    char str[MAX];
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]='\0';

    
    return EXIT_SUCCESS;
}
