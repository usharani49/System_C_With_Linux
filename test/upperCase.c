#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100

int main() {
    
    char str[MAX];
    printf("Enter a string:");
    fgets(str,MAX,stdin);
    
    int i;
    for(i=0;str[i];i++)
    {
      if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\n'))
      {
        str[i]=toupper(str[i]);   
      }
    }
    
    printf("\nThe Modified string is\n%s",str);
    return 0;
}
