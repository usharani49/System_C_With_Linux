#include<stdio.h>
#include<stdlib.h>
#define ROWS 3
#define COLS 3


void transmat(int m[ROWS][COLS],int t[COLS][ROWS])
{
	int i;
	int j;

	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			t[j][i]=m[i][j];
		}
	}
}


int main()
{
	int i;
	int j;
	int m[ROWS][COLS];
	
	
	printf("Enter matrix:\n");
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}

	int t[COLS][ROWS];

	transmat(m,t);

	printf("Transpose matrix:\n");
	for(i=0;i<COLS;i++)
	{
		for(j=0;j<ROWS;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
