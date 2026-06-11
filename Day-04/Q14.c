//Write a program to Find nth Fibonacci term
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term %d is %d\n", n, a);
    } else if (n == 2) {
        printf("Fibonacci term %d is %d\n", n, b);
    } else {
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Fibonacci term %d is %d\n", n, next);
    }

    return 0;
}