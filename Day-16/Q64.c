//Write a program to Remove duplicates from array. 

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[1000] = {0}; // frequency array
    int res[1000], k = 0;

    // keep only first time element appears
    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 0) {
            res[k++] = arr[i];
            freq[arr[i]] = 1;
        }
    }

    // print new array without duplicates
    printf("Array after removing duplicates: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", res[i]);
    }
    return 0;
}

