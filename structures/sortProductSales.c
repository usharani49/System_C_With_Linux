#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100
#define ROWS 8

struct Product
{
    char product_ID[MAX];
    int total_sales_amount;
};

void sortProductSales(struct Product p[],int n)
{
    struct Product temp;
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(p[i].total_sales_amount<p[j].total_sales_amount)
                    {
                        temp =p[i];
                        p[i]=p[j];
                        p[j]=temp;
                    }
                }
        }
}

int main()
{
    struct Product p[ROWS];
    char input[MAX];
    char *tok;
    int uc=0;
    struct Product up[ROWS];
    
    for(int i=0;i<ROWS;i++)
        {
            printf("Enter PRODUCT ID and TOTAL SALES AMOUNT %d(separated by hyphen)\n",i+1);

            fgets(input,MAX,stdin);
            input[strcspn(input,"\n")]='\0';

            tok=strtok(input,"-");
            strcpy(p[i].product_ID,tok);

            tok=strtok(NULL,"-");
            p[i].total_sales_amount=atoi(tok);
        }

    for(int i=0;i<ROWS;i++)
        {
            int found=0;
            for(int j=0;j<uc;j++)
                {
                    if(strcmp(p[i].product_ID,up[j].product_ID)==0)
                    {
                        if(p[i].total_sales_amount>up[j].total_sales_amount)
                            {
                                up[j].total_sales_amount=p[i].total_sales_amount;
                            }
                            found=1;
                            break;
                    }
                }
                if(!found)
                    {
                        strcpy(up[uc].product_ID,p[i].product_ID);
                        up[uc].total_sales_amount=p[i].total_sales_amount;
                        uc++;
                    }
            }
    sortProductSales(up,uc);
    
    printf("\nThe product sales  in decreasing order are:\n");
    for(int i=0;i<uc;i++)
        {
            printf("%s-%d\n",up[i].product_ID,up[i].total_sales_amount);
        }
    return EXIT_SUCCESS;
}
