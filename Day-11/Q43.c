//Write a program to Write function to check  prime

#include <stdio.h>

int prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;   
    printf("Enter a number: ");
    scanf("%d", &num);

    if (prime(num))
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}

