//Write a program to Intersection of arrays. 

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

    // mark elements of first array
    int freq[1000] = {0};
    for(int i = 0; i < n1; i++) {
        freq[arr1[i]] = 1;
    }

    // print common elements
    printf("Intersection of arrays: ");
    for(int i = 0; i < n2; i++) {
        if(freq[arr2[i]] == 1) {
            printf("%d ", arr2[i]);
            freq[arr2[i]] = 0; // avoid duplicate print
        }
    }

    return 0;
}
