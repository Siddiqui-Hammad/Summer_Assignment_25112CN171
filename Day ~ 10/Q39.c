/* Write a program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321  */

#include <stdio.h>

int main() {
    int rows;

    // ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // loop for each line
    for (int i = 1; i <= rows; i++) {
        
        // print spaces first (to center numbers)
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // print increasing numbers (1 to i)
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // print decreasing numbers (i-1 down to 1)
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        // go to next line
        printf("\n");
    }

    return 0;
}
