#include<stdio.h>
#include<stdlib.h>

struct Book
{
	char title[50];
	char author[50];
	float price;
};

int main()
{
	struct Book b[5];
	
	for(int i=0;i<5;i++)
	{
		printf("\nEnter details for book %d:\n",i+1);
		printf("Title: ");
		scanf("%s",b[i].title);
		printf("Author: ");
		scanf("%s",b[i].author);
		printf("Price: ");
		scanf("%f",&b[i].price);
	}

	printf("\nBook Details:\n");
	for(int i=0;i<5;i++)
	{
		printf("\nBook %d:\n",i+1);
		printf("Title: %s\n",b[i].title);
		printf("Author: %s\n",b[i].author);
		printf("Price: %.2f\n",b[i].price);
	}

	return EXIT_SUCCESS;
}
