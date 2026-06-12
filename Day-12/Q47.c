//Write a program to Write function for Fibonacci. 

#include <stdio.h>

void fib(int n) {             
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);     // print term
        c = a + b;            // next term
        a = b;
        b = c;
    }
}

int main() {
    int num;
     printf("Enter a number: ");
    scanf("%d", &num);
    fib(num);
    return 0;
}
