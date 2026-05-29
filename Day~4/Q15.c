//Write a program to Check Armstrong number. 

#include <stdio.h>

int main() {
    int num, temp, rem, digits = 0, result = 0;

    printf("Enter a number to check Armstrong: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10;

        int power_val = 1;
        for (int i = 0; i < digits; i++) {
            power_val *= rem;
        }

        result += power_val;
        temp /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


