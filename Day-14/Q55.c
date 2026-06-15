// Write a program to find the Second largest element

#include <stdio.h>

int main() {
    int n, i;
    
    // ask user for size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    
    // ask user for elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int first = a[0], second = -1;  // start with first element

    // find largest and second largest
    for(i = 1; i < n; i++) {
        if(a[i] > first) {
            second = first;
            first = a[i];
        } else if(a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    if(second == -1) {
        printf("No second largest element\n");
    } else {
        printf("Second largest element = %d\n", second);
    }
    return 0;
}
