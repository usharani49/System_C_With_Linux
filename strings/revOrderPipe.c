#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100
#define MAXWORDS 20
#define MAX_LENGTH 50

int splitWords(char *str,char  words[][MAX_LENGTH]);
void  reverseWordsPipe(char  words[][MAX_LENGTH],int count);


int main()
{
    char str[MAX];
    char words[MAXWORDS][MAX_LENGTH];
    printf("Enter pipe-separated sequence of words:\n");
    fgets(str,MAX,stdin);
    
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';
    }

    int count=splitWords(str,words);

    reverseWordsPipe(words,count);
    
    return EXIT_SUCCESS;
}

int splitWords(char *str,char  words[][MAX_LENGTH])
{
    int c=0;
    char *tok=strtok(str,"|");
    while(tok!=NULL)
        {
            strcpy(words[c],tok);
            c++;
            tok=strtok(NULL,"|");
        }
    return c;
}


void  reverseWordsPipe(char words[][MAX_LENGTH],int count)
{
    for(int i=0;i<count/2;i++)
        {
            char temp[MAX_LENGTH];
            strcpy(temp,words[i]);
            strcpy(words[i],words[count-i-1]);
            strcpy(words[count-i-1],temp);
        }

    for(int i=0;i<count;i++)
        {
            if(i>0)
            {
                printf("|");
            }
            printf("%s",words[i]);
        }
    printf("\n");
}
