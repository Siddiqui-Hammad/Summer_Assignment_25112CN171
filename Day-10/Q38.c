/*  Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    *    */


    #include <stdio.h>

int main() {
  int rows;
  
    // ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // loop for each line
    for (int i = rows; i >= 1; i--) {
        
        // print spaces first
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // then print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // go to next line
        printf("\n");
    }

    return 0;
}
