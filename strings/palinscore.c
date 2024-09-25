#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100

bool ispalin(char *str,int st,int l)
{
  int e=st+l-1;
  while(st<e)
  {
    if(str[st]!=str[e])
    {
      return false;
    }
    st++;
    e--;
  }
  return true;
}

int palinscore(char *str)
{
  int l=strlen(str);
  int i;
  int s=0;
  
  for(i=0;i<=l-4;i++)
  {
    if(ispalin(str,i,4))
    {
      s+=5;
    }
    
    if(i+5<=l && ispalin(str,i,5))
    {
      s+=10;
    }
  }
  
  return s;
}
int main()
{
  char str[MAX];
  printf("Enter a string:");
  fgets(str,MAX,stdin);
  str[strcspn(str,"\n")]='\0';

  int score=palinscore(str);
  
  printf("\nThe final score is  score :%d\n",score);
  
  return EXIT_SUCCESS;
}

