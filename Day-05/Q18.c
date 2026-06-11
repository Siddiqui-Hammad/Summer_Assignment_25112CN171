//Write a program to Check strong number

#include <stdio.h>

int main() {
    int num, temp, t, i, fact, sum = 0;

    printf("Enter a number to check Strong Number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    while (temp > 0) {
        t = temp % 10;   // extract digit
        fact = 1;        // reset factorial for each digit

        for (i = 1; i <= t; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
