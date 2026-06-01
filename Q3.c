//Write a program to Find factorial of a number

#include <stdio.h>
int main() {
    int num, i, fact = 1;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact = fact * i ;
    }

    printf("factorial of %d  is %d\n", num, fact);

    return 0;
}
