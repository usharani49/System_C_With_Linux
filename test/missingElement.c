#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void sort(int[]);
void missing(int[]);

int main() {
    int a[MAX];
    int i;

    printf("Enter array elements:\n");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &a[i]);
    }
    
    sort(a);
    missing(a);

    return EXIT_SUCCESS;
}

void sort(int a[])
{
    int i;
    int j;
    int temp;
    
    for(i=0;i<MAX;i++)
    {
        for(j=i+1;j<MAX;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } 
    }
    
} 

void missing(int a[])
{
    int i;
    
	printf("Missing Element:\n");

    for(i=0;i<MAX;i++)
    {
		if(a[i+1]-a[i]!=1)
		{
			int m=a[i]+1;
			while(m<a[i+1])
			{
				printf("%d ",m);
				m++;
			}
		}
    }
	printf("\n");
}
 
