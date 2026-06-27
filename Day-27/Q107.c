//Write a program to Create salary management system


#include <stdio.h>

#define MAX 100

// Structure for salary details
struct Employee
{
    int empId;
    char name[30];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

// Add employee details
void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("Record Added Successfully!\n");
}

// Display employee records
void displayEmployees()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nEmployee Salary Records\n");

    for(i = 0; i < count; i++)
    {
        printf("\nID     : %d", emp[i].empId);
        printf("\nName   : %s", emp[i].name);
        printf("\nSalary : %.2f\n", emp[i].salary);
    }
}

// Calculate total salary
void totalSalary()
{
    int i;
    float total = 0;

    for(i = 0; i < count; i++)
    {
        total += emp[i].salary;
    }

    printf("\nTotal Salary = %.2f\n", total);
}

// Find highest salary
void highestSalary()
{
    int i, pos = 0;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    for(i = 1; i < count; i++)
    {
        if(emp[i].salary > emp[pos].salary)
        {
            pos = i;
        }
    }

    printf("\nHighest Salary Employee\n");
    printf("ID     : %d\n", emp[pos].empId);
    printf("Name   : %s\n", emp[pos].name);
    printf("Salary : %.2f\n", emp[pos].salary);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Records\n");
        printf("3. Total Salary\n");
        printf("4. Highest Salary\n");
        printf("5. Exit\n");

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
                totalSalary();
                break;

            case 4:
                highestSalary();
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}