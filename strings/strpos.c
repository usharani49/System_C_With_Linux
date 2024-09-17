#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 200

int substrpos(char str[],char substr[])
{
  char *pos = strstr(str,substr);
  if(pos!=NULL)
  {
    return pos-str;
  }
  return -1;
}

int main()
{
  char str[MAX];
  printf("Enter a string:\n");
  fgets(str,MAX,stdin);
  
  char substr[MAX];
  printf("Enter a substring:\n");
  fgets(substr,MAX,stdin);
  
  char *pos = substrpos(str,substr);
  
  if(pos!=-1)
  {
    printf("The given substring %s found at %d\n",substr,pos+1);
  }
  else
  {
    printf("The given substring %s not found\n",substr);
  }
  
  return EXIT_SUCCESS;
}
