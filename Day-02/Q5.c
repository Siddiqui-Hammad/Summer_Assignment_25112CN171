//Write a program to Find sum of digits of a number\

#include <stdio.h>
int main() {
    int num, sum = 0, temp;

    printf("Enter a number to calculate sum: ");
    scanf("%d", &num);

    temp = num;  

    while (temp != 0) {
        int digit = temp % 10;   
        sum += digit;            
        temp = temp / 10;        
    }

    printf("Sum of digits is %d\n", sum);

    return 0;
}