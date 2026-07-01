//Write a program to Create ticket book system


#include <stdio.h>

#define MAX 100

// Structure for patient details
struct Patient
{
    int patientId;
    char name[30];
    int age;
};

struct Patient p[MAX];
int count = 0;

// Function to add patient
void addPatient()
{
    printf("\nEnter Patient ID: ");
    scanf("%d", &p[count].patientId);

    printf("Enter Patient Name: ");
    scanf("%s", p[count].name);

    printf("Enter Age: ");
    scanf("%d", &p[count].age);

    count++;

    printf("Patient Added Successfully!\n");
}

// Function to display patients
void displayPatients()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Patient Records Found!\n");
        return;
    }

    printf("\n===== Patient Records =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nPatient ID : %d", p[i].patientId);
        printf("\nName       : %s", p[i].name);
        printf("\nAge        : %d\n", p[i].age);
    }
}

// Function to search patient
void searchPatient()
{
    int id, i, found = 0;

    printf("\nEnter Patient ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(p[i].patientId == id)
        {
            printf("\nPatient Found\n");
            printf("Patient ID : %d\n", p[i].patientId);
            printf("Name       : %s\n", p[i].name);
            printf("Age        : %d\n", p[i].age);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Patient Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Hospital Management System =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
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