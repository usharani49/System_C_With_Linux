

#include<stdio.h>

int main()
{
	FILE *fp = NULL;
	fp = fopen("test.txt", "w");
	
	int ret_val = 0;
	int num;
	if(fp == NULL)
	{
		printf("fopen() failed\n");
		return 1;
	}
	
	ret_val = fprintf(fp, "The first number is %d\n Second number is %d\n", 10, 20);
	if(ret_val < 0)
	{
		printf("fprintf failed\n");

		ret_val = fclose(fp);
		if(ret_val != 0)
		{
			printf("fclose failed\n");
			return 1;
		}

		return 1;

	}




	ret_val = fclose(fp);
	if(ret_val != 0)
	{
		printf("fclose failed\n");
		return 1;
	}
	return 0;

}

