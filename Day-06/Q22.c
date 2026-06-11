//Write a program to Convert binary to decimal

#include <stdio.h>
#include <math.h>

int main() {
    long long binary;   // to handle long binary inputs
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Process each digit
    while (binary > 0) {
        rem = binary % 10;          // extract last digit (0 or 1)
        decimal += rem * base;      // add to decimal value
        binary = binary / 10;       // remove last digit
        base = base * 2;            // increase power of 2
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}
