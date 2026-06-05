//Write a program to Find largest prime factor.
#include <stdio.h>

int main() {
    int num, i, j, largest = -1, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop through possible factors
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            // Check if i is prime using flag
            flag = 1;  
            for (j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    flag = 0;  // not prime
                    break;
                }
            }
            if (flag == 1 && i > largest) {
                largest = i;
            }
        }
    }

    if (largest != -1)
        printf("Largest prime factor of %d is %d\n", num, largest);
    else
        printf("%d is prime itself, so no smaller prime factors.\n", num);

    return 0;
}
