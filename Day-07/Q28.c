//Write a program to Recursive reverse number

#include <stdio.h>

// Recursive function to reverse a number
int reverse(int n) {
    static int rev = 0;   // keeps track of reversed number
    if (n == 0)
        return rev;
    rev = rev * 10 + (n % 10);
    return reverse(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverse(num));

    return 0;
}
