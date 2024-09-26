#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 100
#define MAXWORDS 20
#define MAX_LENGTH 50

int splitWords(char *str,char  words[][MAX_LENGTH]);
bool isDup(char words[][MAX_LENGTH],int wc,char *word);
void rmDupPipe(char  words[][MAX_LENGTH],int count);


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

    rmDupPipe(words,count);
    
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

bool isDup(char words[][MAX_LENGTH],int wc,char *word)
{
    for(int i=0;i<wc;i++)
        {
            if(strcmp(words[i],word)==0)
            {
                return true;
            }
        }
    return false;
}

void rmDupPipe(char words[][MAX_LENGTH],int count)
{
    int u=0;
    for(int i=0;i<count;i++)
        {
            if(!isDup(words,u,words[i]))
            {
                if(u>0)
                {
                    printf("|");
                }
                printf("%s",words[i]);
                strcpy(words[u],words[i]);
                u++;
            }
        }
    printf("\n");
}
