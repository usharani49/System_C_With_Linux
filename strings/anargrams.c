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

int areAnargrams(char str1[],char str2[])
{
  if(strlen(str1)!=strlen(str2))
  {
    return 0;
  }
  
  sort(str1);
  sort(str2);
  
  if(strcmp(str1,str2)==0)
  {
    return 1;
  }
  
  return 0;
}


int main()
{
  char str1[MAX];  
  printf("Enter a string: ");
  fgets(str1,MAX,stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  printf("\nThe string1 is %s",str1);
    
  
  char str2[MAX];  
  printf("Enter a string: ");
  fgets(str2,MAX,stdin);
  str2[strcspn(str2,"\n")]='\0';
  
  printf("\nThe string2 is %s\n",str2);
  
  int r=areAnargrams(str1,str2);
  
  if(r)
  {
    printf("given strings are anargrams\n");
  }
  else
  {
    printf("given strings are not anargrams\n");
  }
  return EXIT_SUCCESS;
}
