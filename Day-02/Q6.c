//Write a program to Reverse a number

#include <stdio.h>
int main() { 
    int num, reversed = 0, temp;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    temp = num;  

    while (temp != 0) {
        int digit = temp % 10;   
        reversed = reversed * 10 + digit; 
        temp = temp / 10;        
    }

    printf("Reversed number is %d\n", reversed);

    return 0;
}
