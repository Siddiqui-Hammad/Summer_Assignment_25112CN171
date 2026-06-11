
// Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>

int main() {
    int low, high;
   //Determining Range 

    printf("Enter the starting number: ");
    scanf("%d", &low);
    printf("Enter the ending number: ");
    scanf("%d", &high);

    printf("Armstrong numbers in range %d to %d:\n", low, high);

    for (int i = low; i <= high; i++) {
        int temp = i;
        int digits = 0;

       // Counting digits in each term
        int temp2 = temp;
        while (temp2 > 0) {
            digits++;
            temp2 /= 10;
        }

       
        int sum = 0;
        temp2 = temp;
        // Calculating Armstrong number
        while (temp2 > 0) {
            int digit = temp2 % 10;
            sum = sum + pow(digit, digits);
            temp2 = temp2 / 10;
        }

       // Print each term
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
