/* Write a program to Print character pyramid. 
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA  */


#include <stdio.h>

int main() {
    int rows;

    // ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // loop for each line
    for (int i = 1; i <= rows; i++) {
        
        // print spaces first (to center letters)
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // print increasing letters (A to current row letter)
        for (int k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }

        // print decreasing letters (back down to A)
        for (int k = i - 1; k >= 1; k--) {
            printf("%c", 'A' + k - 1);
        }

        // go to next line
        printf("\n");
    }

    return 0;
}
