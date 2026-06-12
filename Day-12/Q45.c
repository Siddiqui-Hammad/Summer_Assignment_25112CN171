//Write a program to Write function for palindrome

#include <stdio.h>

int pal(int n) {          
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10; // take last digit
        temp = temp / 10;           // remove last digit
    }
    return (rev == n);   // return true if same
}

int main() {
    int num;
     printf("Enter a number: ");
    scanf("%d", &num);   // input number
    if (pal(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
