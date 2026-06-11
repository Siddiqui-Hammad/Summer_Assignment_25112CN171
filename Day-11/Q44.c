//Write a program to Write function to find factorial

#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial = %d\n", fact(num));
    return 0;
}
