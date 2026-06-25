//Write a program to Merge two sorted arrays


#include <stdio.h>

int main() {
    int n1, n2;

    // input first sorted array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d sorted elements:\n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // input second sorted array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d sorted elements:\n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1+n2];
    int i=0, j=0, k=0;

    // merge logic
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) merged[k++] = arr1[i++];
        else merged[k++] = arr2[j++];
    }
    while(i < n1) merged[k++] = arr1[i++];
    while(j < n2) merged[k++] = arr2[j++];

    // print merged array
    printf("Merged sorted array: ");
    for(int x = 0; x < n1+n2; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
