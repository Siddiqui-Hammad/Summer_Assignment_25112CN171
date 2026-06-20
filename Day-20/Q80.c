//Write a program to Find column-wise sum


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

    // calculate column sums
    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++) {
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, sum);
    }

    return 0;
}
