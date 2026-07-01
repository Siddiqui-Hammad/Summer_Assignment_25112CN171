//Write a program to Create bank account system

#include <stdio.h>

// Structure for bank account
struct Account
{
    int accNo;
    char name[30];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;

    // Create account
    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    do
    {
        printf("\n===== Bank Management System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);

                a.balance = a.balance + amount;

                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if(amount <= a.balance)
                {
                    a.balance = a.balance - amount;
                    printf("Amount Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d\n", a.accNo);
                printf("Account Holder : %s\n", a.name);
                printf("Balance        : %.2f\n", a.balance);
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