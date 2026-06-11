//Write a program to Count set bits in a number


#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop until number becomes 0
    while (num > 0) {
        if (num & 1) {   // check last bit
            count++;
        }
        num = num >> 1;  // right shift to check next bit
    }

    printf("Total set bits: %d\n", count);

    return 0;
}
