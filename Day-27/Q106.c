//Write a program to Create employee management system

#include <stdio.h>

#define MAX 100

// Structure for employee details
struct Employee
{
    int empId;
    char name[30];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

// Function to add employee
void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("Employee Added Successfully!\n");
}

// Function to display employees
void displayEmployees()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\nEmployee Records\n");
    printf("-------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("ID     : %d\n", emp[i].empId);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
        printf("-------------------------\n");
    }
}

// Function to search employee
void searchEmployee()
{
    int id, i, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            printf("\nEmployee Found\n");
            printf("ID     : %d\n", emp[i].empId);
            printf("Name   : %s\n", emp[i].name);
            printf("Salary : %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}