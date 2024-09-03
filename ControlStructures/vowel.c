#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf(" %c",&ch);

	switch(ch)
	{
		case 'A':
		case 'a' :
			printf("You entered vowel");
			break;
		case 'E':
		case 'e':
			printf("You entered vowel");
			break;
		case 'I' :
		case 'i':
			printf("You entered vowel");
			break;
		case 'O' :
		case 'o':
			printf("You entered vowel");
			break;
		case 'U':
		case 'u':
			printf("You entered vowel");
			break;
		default:
			printf("You entered consonant");
	}

	return EXIT_SUCCESS;

}
