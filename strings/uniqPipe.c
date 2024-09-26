#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 100
#define MAXWORDS 20
#define MAX_LENGTH 50

int splitWords(char *str,char  words[][MAX_LENGTH]);
bool isUniq(char words[][MAX_LENGTH],int wc,char *word);
void  uniqPipe(char  words[][MAX_LENGTH],int count);


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

    uniqPipe(words,count);
    
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

bool isUniq(char words[][MAX_LENGTH],int wc,char *word)
{
    int c=0;
    for(int i=0;i<wc;i++)
        {
            if(strcmp(words[i],word)==0)
            {
                c++;
            }
        } 
    return c==1;
}

void  uniqPipe(char words[][MAX_LENGTH],int count)
{
    bool firstWord=true; 
    for(int i=0;i<count;i++)
        {
            if(isUniq(words,count,words[i]))
            {
                if(!firstWord)
                {
                    printf("|");
                }
                printf("%s",words[i]);
                firstWord=false;
            }
        } 
    printf("\n");
}
