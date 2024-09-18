#include<stdio.h>
#include<stdlib.h>

struct Employee
{
	int id;
	char n[50];
	float salary;
}; 

void printEmployee(struct Employee e)
{
	printf("\nEmployee Details:\n");
	printf("ID: %d\n",e.id);
	printf("Name: %s\n",e.n);
	printf("Salary: %.2f\n",e.salary);
} 

int main()
{
	struct Employee e;

	printf("Enter employee ID: ");
	scanf("%d",&e.id);

	printf("Enter employee name: ");
	scanf("%s",e.n);

	printf("Enter employee salary: ");
	scanf("%f",&e.salary);

	printEmployee(e);

	return EXIT_SUCCESS;
}
