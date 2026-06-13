//Write a program to Find sum and average of array

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum / n;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    return 0;
}
