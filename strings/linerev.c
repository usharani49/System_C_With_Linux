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
  char line[MAX];
  printf("Enter multiple strings :");
  while(fgets(line,MAX,stdin))
  {
    //line[strcspn(line,"\n")]="\0";
    reversestr(line);
    printf("The reversed lines: %s\n",line);
  }
  
  
  
  return EXIT_SUCCESS;
}
