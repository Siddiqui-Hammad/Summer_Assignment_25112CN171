//Write a program to Write function for Armstrong

#include <stdio.h>
#include <math.h>

int arm(int n) {             
    int sum = 0, temp = n, digits = 0;
    int t = n;
    while (t > 0) { digits++; t /= 10; } // count digits
    while (temp > 0) {
        int d = temp % 10;               // take digit
        sum += pow(d, digits);           // digit^digits
        temp /= 10;
    }
    return (sum == n);        // true if same
}

int main() {
    int num;
     printf("Enter a number: ");
    scanf("%d", &num);
    if (arm(num))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
