#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void rmdupch(char str[])
{
  char unq[MAX];
  int c=-1;
  int l=strlen(str);
  int i;
  int j;
  int isdup;
  
  for(i=0;i<l;i++)
  {
    isdup=0;
    for(j=0;j<=c;j++)
    {
      if(str[i]==unq[j])
      {
        isdup=1;
        break;
      }
    } 
    if(!isdup && str[i]!='\n')
    {
      unq[++c]=str[i];
    }
  }
  unq[c+1]='\0';
  strcpy(str,unq);
}

int main()
{
  char str[MAX];  
  printf("Enter a string: ");
  fgets(str,MAX,stdin);
  
  rmdupch(str);
  printf("\nThe string is %s",str);
    
  return EXIT_SUCCESS;
}
