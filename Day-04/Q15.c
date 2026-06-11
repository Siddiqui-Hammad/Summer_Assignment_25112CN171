//Write a program to Check Armstrong number. 
#include <stdio.h>
#include <math.h>

int main() {
    int num, count = 0, sum = 0, temp, digit;
// Enter your input 
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
  // Digit counting 
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
// Armstrong number calculation
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
