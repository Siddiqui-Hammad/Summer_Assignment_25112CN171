//Write a program to Count even and odd elements

#include <stdio.h>
int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even count = %d, Odd count = %d\n", even, odd);
    return 0;
}
