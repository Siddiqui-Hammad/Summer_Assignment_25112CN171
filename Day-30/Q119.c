//Write a program to Create mini employee management system


#include <stdio.h>

#define MAX 100

// Structure for movie booking details
struct Booking
{
    int ticketNo;
    char name[30];
};

struct Booking b[MAX];
int count = 0;

// Function to book ticket
void bookTicket()
{
    printf("\nEnter Ticket Number: ");
    scanf("%d", &b[count].ticketNo);

    printf("Enter Customer Name: ");
    scanf("%s", b[count].name);

    count++;

    printf("Ticket Booked Successfully!\n");
}

// Function to display bookings
void displayBookings()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Bookings Found!\n");
        return;
    }

    printf("\n===== Booking Details =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nTicket No : %d", b[i].ticketNo);
        printf("\nName      : %s\n", b[i].name);
    }
}

// Function to search booking
void searchBooking()
{
    int ticket, i, found = 0;

    printf("\nEnter Ticket Number to Search: ");
    scanf("%d", &ticket);

    for(i = 0; i < count; i++)
    {
        if(b[i].ticketNo == ticket)
        {
            printf("\nBooking Found\n");
            printf("Ticket No : %d\n", b[i].ticketNo);
            printf("Name      : %s\n", b[i].name);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Booking Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Movie Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayBookings();
                break;

            case 3:
                searchBooking();
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