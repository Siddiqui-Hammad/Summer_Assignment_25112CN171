//Write a program to Create inventory management system

#include <stdio.h>

// Global variables to store votes
int votesA = 0;
int votesB = 0;

// Function to cast vote
void castVote()
{
    int choice;

    printf("\nVote for Candidate\n");
    printf("1. Candidate A\n");
    printf("2. Candidate B\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        votesA++;
        printf("Vote Cast Successfully!\n");
    }
    else if(choice == 2)
    {
        votesB++;
        printf("Vote Cast Successfully!\n");
    }
    else
    {
        printf("Invalid Vote!\n");
    }
}

// Function to display vote count
void displayVotes()
{
    printf("\n===== Vote Count =====\n");
    printf("Candidate A : %d\n", votesA);
    printf("Candidate B : %d\n", votesB);
}

// Function to display winner
void displayWinner()
{
    printf("\n===== Election Result =====\n");

    if(votesA > votesB)
    {
        printf("Candidate A Wins!\n");
    }
    else if(votesB > votesA)
    {
        printf("Candidate B Wins!\n");
    }
    else
    {
        printf("Election Draw!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Voting System =====\n");
        printf("1. Cast Vote\n");
        printf("2. View Vote Count\n");
        printf("3. Display Winner\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                castVote();
                break;

            case 2:
                displayVotes();
                break;

            case 3:
                displayWinner();
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