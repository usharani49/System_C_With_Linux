
#include<stdio.h>
#include<string.h>
#define MAX 10


int main()
{
	char str[MAX];

	char *input[] = {"Nalanda\n", "Prism\n","Aricent\n"};

	int fgets_r = 0, fputs_r = 0, ret_val = 0;

	FILE *input_file, *output_file ;

	input_file = fopen("Sample.txt", "w");

	if(input_file == NULL)
	{
		printf("open failed\n");
		return 1;
	}
	for(int i =0; i< 3; i++)
	{
		fputs_r = fputs(input[i], input_file);
		if(fputs_r == EOF)
		{
			printf("fputs failed");
			//fclose and err handling
			ret_val = fclose(input_file);
			if(ret_val == EOF)
			{
				printf("Fclose failed\n");
				return 1;
			}
			return 1;
		}
	}
	ret_val = fclose(input_file);
	if(ret_val == EOF)
	{
		printf("Fclose failed\n");
		return 1;
	}
	
	
	output_file = fopen("Sample.txt", "r");
	//fopen error handling

	while(!feof(output_file))
	{
		char *temp =fgets(str, MAX-1, output_file);
		if(temp!= NULL)
		{
		if(str[strlen(str)-1] == '\n')
			str[strlen(str)-1] = '\0';
		puts(str);
		}
	}

	fclose(output_file);
	//error handling for fclose

	return 0;
}
