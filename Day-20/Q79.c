//Write a program to Find row-wise sum


#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // calculate row sums
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    return 0;
}
