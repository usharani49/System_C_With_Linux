#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void removeadjdup(char word[])
{
  char uniq[MAX];
  int l=strlen(word);
  int c=-1;
  int i;
  
  for(i=0;i<l;i++)
  {
    if(c>=0 && (uniq[c]==word[i]))
    {
      c--;
    }
    else
    {
      uniq[++c]=word[i];
    }
  }
  uniq[c+1]='\0';
  strcpy(word,uniq);
}

int main()
{
  char word[MAX];
  printf("Enter a word:");
  scanf("%s",&word);
  
  removeadjdup(word);
  printf("The word is %s\n",word);
  return EXIT_SUCCESS;
}
