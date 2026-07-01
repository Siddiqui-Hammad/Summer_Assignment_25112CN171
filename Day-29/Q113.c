//Write a program to Create menu-driven calculator


#include <stdio.h>

#define MAX 100

// Structure for customer details
struct Customer
{
    int roomNo;
    char name[30];
    int days;
};

struct Customer c[MAX];
int count = 0;

// Function to add customer
void addCustomer()
{
    printf("\nEnter Room Number: ");
    scanf("%d", &c[count].roomNo);

    printf("Enter Customer Name: ");
    scanf("%s", c[count].name);

    printf("Enter Number of Days: ");
    scanf("%d", &c[count].days);

    count++;

    printf("Customer Added Successfully!\n");
}

// Function to display customers
void displayCustomers()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Customer Records Found!\n");
        return;
    }

    printf("\n===== Customer Records =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nRoom No : %d", c[i].roomNo);
        printf("\nName    : %s", c[i].name);
        printf("\nDays    : %d\n", c[i].days);
    }
}

// Function to search customer
void searchCustomer()
{
    int room, i, found = 0;

    printf("\nEnter Room Number to Search: ");
    scanf("%d", &room);

    for(i = 0; i < count; i++)
    {
        if(c[i].roomNo == room)
        {
            printf("\nCustomer Found\n");
            printf("Room No : %d\n", c[i].roomNo);
            printf("Name    : %s\n", c[i].name);
            printf("Days    : %d\n", c[i].days);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Customer Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Hotel Management System =====\n");
        printf("1. Add Customer\n");
        printf("2. Display Customers\n");
        printf("3. Search Customer\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addCustomer();
                break;

            case 2:
                displayCustomers();
                break;

            case 3:
                searchCustomer();
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