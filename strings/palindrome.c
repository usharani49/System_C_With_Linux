#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100


int ispalin(char str[])
{
  int l=strlen(str);
  int s=0;
  int e=l-1;
  
  while(s<e)
  {
    if(str[s]!=str[e])
    {
      return 1;
    }
    s++;
    e--;
  }
  return 0;
}

int main()
{
  char str[MAX];  
  printf("Enter a string: ");
  fgets(str,MAX,stdin);
  str[strcspn(str,"\n")]='\0';
  
  printf("\nThe string is %s\n",str);
  
  if(ispalin(str)==0)
  {
    printf("Given string %s is palindrome",str);
  }
  else
  {
    printf("Given string %s is not palindrome",str);
  }
  
  return EXIT_SUCCESS;
}
