//Write a program to Union of arrays.

#include <stdio.h>

int main() {
    int n1, n2;

    // input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // frequency array to track unique elements
    int freq[1000] = {0};

    printf("Union of arrays: ");
    for(int i = 0; i < n1; i++) {
        if(freq[arr1[i]] == 0) {
            printf("%d ", arr1[i]);
            freq[arr1[i]] = 1;
        }
    }
    for(int i = 0; i < n2; i++) {
        if(freq[arr2[i]] == 0) {
            printf("%d ", arr2[i]);
            freq[arr2[i]] = 1;
        }
    }

    return 0;
}

