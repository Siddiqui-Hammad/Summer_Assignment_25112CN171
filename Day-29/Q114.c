//Write a program to Create menu-driven array operations system


#include <stdio.h>

#define MAX 100

// Structure for item details
struct Item
{
    int itemId;
    char itemName[30];
    float price;
};

struct Item item[MAX];
int count = 0;

// Function to add item
void addItem()
{
    printf("\nEnter Item ID: ");
    scanf("%d", &item[count].itemId);

    printf("Enter Item Name: ");
    scanf("%s", item[count].itemName);

    printf("Enter Item Price: ");
    scanf("%f", &item[count].price);

    count++;

    printf("Item Added Successfully!\n");
}

// Function to display cart items
void displayCart()
{
    int i;

    if(count == 0)
    {
        printf("\nCart is Empty!\n");
        return;
    }

    printf("\n===== Shopping Cart =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nItem ID   : %d", item[i].itemId);
        printf("\nItem Name : %s", item[i].itemName);
        printf("\nPrice     : %.2f\n", item[i].price);
    }
}

// Function to calculate total bill
void totalBill()
{
    int i;
    float total = 0;

    for(i = 0; i < count; i++)
    {
        total += item[i].price;
    }

    printf("\nTotal Bill = %.2f\n", total);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Online Shopping Cart =====\n");
        printf("1. Add Item\n");
        printf("2. Display Cart\n");
        printf("3. Calculate Total Bill\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addItem();
                break;

            case 2:
                displayCart();
                break;

            case 3:
                totalBill();
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