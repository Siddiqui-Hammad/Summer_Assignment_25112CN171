//Write a program to Check whether a number is palindrome
#include <stdio.h>
int main() {
    int num, reversed = 0, temp;

    printf("Enter a number to check palindrome: ");
    scanf("%d", &num);

    temp = num;  

    while (temp != 0) {
        int digit = temp % 10;   
        reversed = reversed * 10 + digit; 
        temp = temp / 10;        
    }

    if (num == reversed) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}