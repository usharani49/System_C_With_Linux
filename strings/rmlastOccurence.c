#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void rmlastOccurence(char *str,char *word)
{
  int sl=strlen(str);
  int wl=strlen(word);
  int i;
  int lPos=-1;
  
  for(i=0;i<sl-wl;i++)
  {
    if(strncmp(&str[i],word,wl)==0)
    {
      lPos=i;
    }
  }
  
  if(lPos!=-1)
  {
    for(i=lPos;i<=sl-wl;i++)
    {
      str[i]=str[i+wl];
    }
  }
}

int main()
{
  char str[MAX];
  printf("Enter a string:\n");
  fgets(str,MAX,stdin);
  str[strcspn(str,"\n")]='\0';
  
  char word[MAX];
  printf("Enter a word:\n");
  scanf("%s",word);
  getchar();
  
  printf("Input string is:%s\n",str);
  printf("Input word to remove last occurence:%s\n",word);
  
  rmlastOccurence(str,word);
  printf("After removing the word %s, the string becomes:\n%s",word,str);
  
  return EXIT_SUCCESS;
}
