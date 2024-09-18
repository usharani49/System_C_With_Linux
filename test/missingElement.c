#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int sort(int[]);
int missing(int[]);

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

int sort(int a[])
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
    
    printf("Sorted Array:\n");
    for(i=0;i<MAX;i++)
    {
        printf("%d ",a[i]);
    }
} 

int missing(int a[])
{
    int i;
    
    for(i=0;i<MAX;i++)
    {
        if(a[i]!=i+1)
        {
            printf("\nMissing element: %d",i+1);
        }
    }
}

