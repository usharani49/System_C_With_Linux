#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void sort(char str[])
{
  int l=strlen(str);
  char temp;
  int i;
  int j;
  
  for(i=0;i<l;i++)
  {
    for(j=i+1;j<l;j++)
    {
      if(str[i]>str[j])
      {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
      }
    }
  }
}


int main()
{
  char str[MAX];  
  printf("Enter a string: ");
  fgets(str,MAX,stdin);
  str[strcspn(str,"\n")]='\0';
  
  printf("\nThe string1 is %s\n",str);
    
  sort(str);
  printf("After arranging in lexicographical order: %s",str);
  return EXIT_SUCCESS;
}
