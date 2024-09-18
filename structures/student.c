#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct student
{
	char name[MAX];
	int age;
	char grade;
};

int main()
{
	struct student s;

	printf("Enter name: ");
	scanf("%s",s.name);

	printf("Enter age: ");
	scanf("%d",&s.age);

	printf("Enter grade: ");
	scanf(" %c",&s.grade);

	printf("\nStudent Details:\n");
	printf("Name: %s\n",s.name);
	printf("Age: %d\n",s.age);
	printf("Grade: %c\n",s.grade);

	return EXIT_SUCCESS;
}
