//Write a program to Create mini library system

#include <stdio.h>

#define MAX 100

// Structure for passenger details
struct Passenger
{
    int seatNo;
    char name[30];
};

struct Passenger p[MAX];
int count = 0;

// Function to book seat
void bookSeat()
{
    printf("\nEnter Seat Number: ");
    scanf("%d", &p[count].seatNo);

    printf("Enter Passenger Name: ");
    scanf("%s", p[count].name);

    count++;

    printf("Seat Booked Successfully!\n");
}

// Function to display reservations
void displayReservations()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Reservations Found!\n");
        return;
    }

    printf("\n===== Reservation Details =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nSeat No : %d", p[i].seatNo);
        printf("\nName    : %s\n", p[i].name);
    }
}

// Function to search reservation
void searchReservation()
{
    int seat, i, found = 0;

    printf("\nEnter Seat Number to Search: ");
    scanf("%d", &seat);

    for(i = 0; i < count; i++)
    {
        if(p[i].seatNo == seat)
        {
            printf("\nReservation Found\n");
            printf("Seat No : %d\n", p[i].seatNo);
            printf("Name    : %s\n", p[i].name);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Reservation Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Bus Reservation System =====\n");
        printf("1. Book Seat\n");
        printf("2. Display Reservations\n");
        printf("3. Search Reservation\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookSeat();
                break;

            case 2:
                displayReservations();
                break;

            case 3:
                searchReservation();
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