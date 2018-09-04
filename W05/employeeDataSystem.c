/* W05
*  employeeDataSystem.c
*  Ivy Leano
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Define Number of Employees "SIZE" to be 4

#define SIZE 4 

// Declare Struct Employee 

struct Employee 
{
	int id_num;
	int age;
	double salary;
};

int main(void) 
{
	int varSize = SIZE;
	int x = 0;
	int y;
	int z;
	int n;
	int f;
	int option = 0;
	int num = 0;
	int key;

	// Struct Employee array "emp" with SIZE elements, initialized to zero

	struct Employee emp[SIZE] = { { 0 } };

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do 
	{
		// User option list

		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Stores user input to option variable

		scanf("%d", &option);

		switch (option) 
		{
			// Exit the program

		case 0:	
			printf("\n");
			printf("Exiting Employee Data Program. Good Bye!!!");
			printf("\n");
			break;

			// Display Employee Data

		case 1: 
			printf("\n");
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (z = 0; z < varSize; z++) 
			{
				printf("%6d%9d%11.2lf\n", emp[z].id_num, emp[z].age, emp[z].salary);

			}
			printf("\n");
			break;

			// Add employee data
			// Check for limits on the array and add employee 
			// data accordingly. 

		case 2:	
			if (x >= varSize) 
			{
				printf("\n");
				printf("Adding Employee\n");
				printf("===============\n");
				printf("ERROR!!! Maximum Number of Employees Reached\n");
				printf("\n");
			}

			else 
			{
				printf("\n");
				printf("Adding Employee\n");
				printf("===============\n");
				printf("Enter Employee ID: ");
				scanf("%d", &emp[x].id_num);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[x].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[x].salary);
				printf("\n");
				x++;
			}
			break;

			// Update Employee Salary

		case 3:
			printf("\n");
			printf("Update Employee Salary\n");
			printf("======================\n");

			do 
			{
				printf("Enter Employee ID: ");
				scanf("%d", &num);

				for (y = 0; y < SIZE; y++) 
				{
					// The three lines below were adapted from 
				    // https://www.studytonight.com/c/programs/array/deleting-an-element-from-array

					if (num == emp[y].id_num) 
					{ 
						// Stores index

						key = y; 

						// Condition statement for if-statement outside the do-while loop

						f = 1; 

						// Escapes from do-while if num matches id in array

						n = 0; 
					}
				}

			} while (n != 0);

			if (f == 1) 
			{
				printf("The current salary is %.2lf\n", emp[key].salary);
				printf("Enter Employee New Salary: ");
				scanf("%lf", &emp[key].salary);
				printf("\n");
			}
			break;

			// Remove employee

		case 4:
			printf("\n");
			printf("Remove Employee\n");
			printf("===============\n");

			do 
			{
				printf("Enter Employee ID: ");
				scanf("%d", &num);
				for (z = 0; z < varSize; z++) 
				{
					if (num == emp[z].id_num) 
					{
						key = z; 
						f = 1; 
						n = 0;
					}
				}
			} while (n != 0);

			if (f == 1) 
			{
				for (z = key; z < varSize - 1; z++) 
				{
					emp[z] = emp[z + 1]; 
				}
			}

			printf("Employee %d will be removed\n", num);
			printf("\n");
			varSize = varSize - 1;
			break;

		default:
			printf("\n");
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}
