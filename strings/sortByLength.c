#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100
#define MAXWORDS 20
#define MAX_LENGTH 50

int splitWords(char *str,char  words[][MAX_LENGTH]);
int cmpByLength(const void *a,const void *b);
void  sortByLength(char  words[][MAX_LENGTH],int count);


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

    sortByLength(words,count);
    
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

int cmpByLength(const void *a,const void *b)
{
    const char *wordA = (const char *)a;
    const char *wordB = (const char *)b;

    return strlen(wordA)-strlen(wordB);
}

void  sortByLength(char words[][MAX_LENGTH],int count)
{
    qsort(words,count,MAX_LENGTH,cmpByLength);

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
