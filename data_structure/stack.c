#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 1
#define FAILURE 0
#define STACKSIZE 5
#define END -1
#define START 0

int push(int[],int*,int);
int pop(int[],int*);
void display(int [],int);
int overflow(int);
int isempty(int);

int overflow(int top)
{
	if(STACKSIZE-1==top)
	{
		return SUCCESS;
	}
	else
	{
		return FAILURE;
	}
}

int isempty(int top)
{
	if(END==top)
	{
		return SUCCESS;
	}
	else
	{
		return FAILURE;
	}
}

int push(int st[],int *top, int value)
{
	if(overflow(*top))
	{
		printf("\nSTACK OVERFLOW\n");
		return FAILURE;
	}
	*top+=1;
	st[*top]=value;

	return SUCCESS;
}

int pop(int st[],int *top)
{
	int item;
	if(isempty(*top))
	{
		printf("\nSTACK UNDERFLOW\n");
		return FAILURE;
	}
	item=st[*top];
	*top-=1;
	return item;
}

void display(int st[],int top)
{
	int counter;
	if(isempty(top))
	{
		printf("The stack is empty\n");
	}
	else
	{
		printf("\nThe items in the stack are\n");
		for(int counter=START;counter<=top	;counter++)
		{
			printf("%d ",st[counter]);
		}
		printf("\n");
	}
}

int main()
{
	int st[STACKSIZE];
	int top=-1;
	int ch;
	int item;

	while(1)
	{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Exit\n");

		printf("Enter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("Enter the element to be pushed\n");
					scanf("%d",&item);
					if(push(st,&top,item)==SUCCESS)
					{
						printf("%d pushed successfully\n",item);
					}
					break;

			case 2: item=pop(st,&top);
					if(item!=FAILURE)
					{
						printf("Item popped is %d\n",item);
					}
					break;

			case 3: display(st,top);
					break;

			case 4: exit(SUCCESS);
		}
	}
	return EXIT_SUCCESS;
}
