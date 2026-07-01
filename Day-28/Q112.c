//Write a program to Create contact management system

#include <stdio.h>

#define MAX 100

// Structure for product details
struct Product
{
    int productId;
    char productName[30];
    int quantity;
};

struct Product p[MAX];
int count = 0;

// Function to add product
void addProduct()
{
    printf("\nEnter Product ID: ");
    scanf("%d", &p[count].productId);

    printf("Enter Product Name: ");
    scanf("%s", p[count].productName);

    printf("Enter Quantity: ");
    scanf("%d", &p[count].quantity);

    count++;

    printf("Product Added Successfully!\n");
}

// Function to display products
void displayProducts()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Products Available!\n");
        return;
    }

    printf("\n===== Product Records =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nProduct ID   : %d", p[i].productId);
        printf("\nProduct Name : %s", p[i].productName);
        printf("\nQuantity     : %d\n", p[i].quantity);
    }
}

// Function to search product
void searchProduct()
{
    int id, i, found = 0;

    printf("\nEnter Product ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(p[i].productId == id)
        {
            printf("\nProduct Found\n");
            printf("Product ID   : %d\n", p[i].productId);
            printf("Product Name : %s\n", p[i].productName);
            printf("Quantity     : %d\n", p[i].quantity);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
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