//Write a program to Create student record system using arrays and strings.


#include <stdio.h>

#define MAX 100

// Structure for passenger details
struct Passenger
{
    int ticketNo;
    char name[30];
    int age;
};

struct Passenger p[MAX];
int count = 0;

// Function to book ticket
void bookTicket()
{
    printf("\nEnter Ticket Number: ");
    scanf("%d", &p[count].ticketNo);

    printf("Enter Passenger Name: ");
    scanf("%s", p[count].name);

    printf("Enter Age: ");
    scanf("%d", &p[count].age);

    count++;

    printf("Ticket Booked Successfully!\n");
}

// Function to display all passengers
void displayPassengers()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Reservations Found!\n");
        return;
    }

    printf("\n===== Passenger Details =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nTicket No : %d", p[i].ticketNo);
        printf("\nName      : %s", p[i].name);
        printf("\nAge       : %d\n", p[i].age);
    }
}

// Function to search passenger
void searchPassenger()
{
    int ticket, i, found = 0;

    printf("\nEnter Ticket Number to Search: ");
    scanf("%d", &ticket);

    for(i = 0; i < count; i++)
    {
        if(p[i].ticketNo == ticket)
        {
            printf("\nPassenger Found\n");
            printf("Ticket No : %d\n", p[i].ticketNo);
            printf("Name      : %s\n", p[i].name);
            printf("Age       : %d\n", p[i].age);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Passenger Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Railway Reservation System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Passengers\n");
        printf("3. Search Passenger\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayPassengers();
                break;

            case 3:
                searchPassenger();
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