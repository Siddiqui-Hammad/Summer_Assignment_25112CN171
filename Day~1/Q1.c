//Calculate sum of first N natural numbers

#include <stdio.h>
int main() {
    int num, i, sum = 0;

    printf("Enter a number to calculate sum: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        sum = sum + i;
    }

    printf("Sum is %d\n", sum);

    return 0;
}

