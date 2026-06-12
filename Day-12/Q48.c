//Write a program to Write function for perfect number

#include <stdio.h>

int perf(int n) {            
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i; // add divisor
    }
    return (sum == n);        // true if same
}

int main() {
    int num;
     printf("Enter a number: ");
    scanf("%d", &num);
    if (perf(num))
        printf("Perfect Number\n");
    else
        printf("Not Perfect\n");
    return 0;
}
