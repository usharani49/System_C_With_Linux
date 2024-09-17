#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void sortStrings(char a[][MAX],int n)
{
  char temp[MAX];
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(strcmp(a[i],a[j])>0)
      {
        strcpy(temp,a[i]);
        strcpy(a[i],a[j]);
        strcpy(a[j],temp);
      }
    }
  }
}

int main()
{
  int n;
  printf("Enter number of rows:");
  scanf("%d",&n);
  getchar();
  
  char str[n][MAX];
  
  printf("Enter the %d strings\n",n);
  for(int i=0;i<n;i++)
  {
    fgets(str[i],MAX,stdin);
    str[i][strcspn(str[i],"\n")]='\0';
  }
  sortStrings(str,n);
  
  printf("Strings in lexicographical order:\n");
  for(int i=0;i<n;i++)
  {
    printf("%s\n",str[i]);
  }
  
  return EXIT_SUCCESS;
}
