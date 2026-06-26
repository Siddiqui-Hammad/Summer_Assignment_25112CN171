//Write a program to Create number guessing game. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int maxRange, num, guess;

    // ask user for range
    printf("Enter maximum number for guessing game: ");
    scanf("%d", &maxRange);

    // generate random number between 1 and maxRange
    srand(time(0));
    num = rand() % maxRange + 1;

    printf("Guess the number (between 1 and %d): ", maxRange);

    // keep guessing until correct
    do {
        scanf("%d", &guess);

        if(guess > num) {
            printf("Too high, try again: ");
        }
        else if(guess < num) {
            printf("Too low, try again: ");
        }
    } while(guess != num);

    printf("Correct! The number was %d\n", num);
    return 0;
}
