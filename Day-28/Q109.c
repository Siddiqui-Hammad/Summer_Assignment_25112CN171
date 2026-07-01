//Write a program to Create library management system

#include <stdio.h>

#define MAX 100

// Structure for book details
struct Book
{
    int bookId;
    char title[50];
    char author[30];
};

struct Book b[MAX];
int count = 0;

// Function to add a book
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[count].bookId);

    printf("Enter Book Title: ");
    scanf("%s", b[count].title);

    printf("Enter Author Name: ");
    scanf("%s", b[count].author);

    count++;

    printf("Book Added Successfully!\n");
}

// Function to display books
void displayBooks()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n===== Book Records =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nBook ID : %d", b[i].bookId);
        printf("\nTitle   : %s", b[i].title);
        printf("\nAuthor  : %s\n", b[i].author);
    }
}

// Function to search a book
void searchBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(b[i].bookId == id)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n", b[i].bookId);
            printf("Title   : %s\n", b[i].title);
            printf("Author  : %s\n", b[i].author);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
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