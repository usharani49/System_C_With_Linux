#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void reversestr(char str[])
{
  int l=strlen(str);
  int s=0;
  int e=l-1;
  
  char temp;
  
  while(s<e)
  {
    temp=str[s];
    str[s]=str[e];
    str[e]=temp;
    
    s++;
    e--;
  }
  
}

int main()
{
  char str[MAX];
  printf("Enter a string:");
  fgets(str,MAX,stdin);
  
  reversestr(str);
  printf("The reversed string is %s",str);
  
  return EXIT_SUCCESS;
}
