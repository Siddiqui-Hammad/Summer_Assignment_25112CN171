//Write a program to Find missing number in array

#include <stdio.h>

int main() {
    int n;
    printf("Enter n (last number in sequence): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d numbers (from 1 to %d, with one missing):\n", n-1, n);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int total = n * (n + 1) / 2; // sum of 1 to n
    int sum = 0;

    // add all array elements
    for(int i = 0; i < n-1; i++) {
        sum = sum + arr[i];
    }

    printf("Missing number is %d\n", total - sum);
    return 0;
}
