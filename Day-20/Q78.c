//Write a program to Check symmetric matrix

#include <stdio.h>

int main() {
    int n;

    // square matrix only
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    // check symmetry: a[i][j] == a[j][i]
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag) printf("Matrix is symmetric\n");
    else printf("Matrix is not symmetric\n");

    return 0;
}
