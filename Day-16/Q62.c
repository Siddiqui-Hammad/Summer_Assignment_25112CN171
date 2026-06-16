//Write a program to Find maximum frequency element.

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
    int max = 0, ans = -1;

    // count frequency of each element
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if(freq[arr[i]] > max) {
            max = freq[arr[i]];
            ans = arr[i];
        }
    }

    printf("Element with max frequency is %d\n", ans);
    return 0;
}
