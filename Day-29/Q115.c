//Write a program to Create menu-driven string operations system

#include <stdio.h>

#define MAX 100

// Structure for employee payroll details
struct Employee
{
    int empId;
    char name[30];
    float basicSalary;
    float bonus;
    float netSalary;
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

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &emp[count].bonus);

    // Calculate net salary
    emp[count].netSalary =
        emp[count].basicSalary + emp[count].bonus;

    count++;

    printf("Record Added Successfully!\n");
}

// Function to display payroll records
void displayPayroll()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n===== Payroll Records =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nEmployee ID  : %d", emp[i].empId);
        printf("\nName         : %s", emp[i].name);
        printf("\nBasic Salary : %.2f", emp[i].basicSalary);
        printf("\nBonus        : %.2f", emp[i].bonus);
        printf("\nNet Salary   : %.2f\n", emp[i].netSalary);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Payroll Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Payroll\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayPayroll();
                break;

            case 3:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}