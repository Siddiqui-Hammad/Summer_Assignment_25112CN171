//Write a program to Recursive sum of digits

#include <stdio.h>

// Recursive function to calculate sum of digits
int sum(int n) {
    if (n == 0)   // Base case
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);  // Recursive step
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;  // Handle negative numbers
    }

    printf("Sum of digits = %d\n", sumOfDigits(num));

    return 0;
}
