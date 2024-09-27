#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int parse_input(char *str,int a[])
{
    char *tok=strtok(str,",");
    int c=0;
    while(tok!=NULL)
        {
            a[c++]=atoi(tok);
            tok=strtok(NULL,",");
        }
    return c;
}

void findHighestOccurence(int a[],int s1,int b[],int s2)
{
    int mc=0;
    int mn=-1;

    printf("\n");
    for(int i=0;i<s1;i++)
        {
            int c=0;
            for(int j=0;j<s2;j++)
                {
                    if(a[i]==b[j])
                    {
                        c++;
                    }
                }
            if(c>mc)
            {
                mc=c;
                mn=a[i];
            }
        }
    if(mn!=-1)
    {
        printf("%d-%d\n",mn,mc);
    }
}

int main()
{
    char str1[MAX];
    char str2[MAX];
    int a[MAX];
    int b[MAX];
    printf("Enter comma-separated elements for list1:\n");
    fgets(str1,MAX,stdin);
    int  s1 = parse_input(str1,a);
    
    printf("\nEnter comma-separated elements for list2:\n");
    fgets(str2,MAX,stdin);
    int s2=parse_input(str2,b);

    findHighestOccurence(a,s1,b,s2);
    
    return EXIT_SUCCESS;
}
