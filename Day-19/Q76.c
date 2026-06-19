// Write a program to Find diagonal sum.


#include <stdio.h>

int main() {
    int n;

    // square matrix only
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], sum = 0;

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // sum of main diagonal
    for(int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal = %d\n", sum);

    return 0;
}
