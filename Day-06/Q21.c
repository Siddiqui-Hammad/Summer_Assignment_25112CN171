//Write a program to Convert decimal to binary

#include<stdio.h>

#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Edge case: if number is 0
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;   // store remainder (0 or 1)
        num = num / 2;         // reduce number
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}