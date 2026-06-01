//print multiplication table of a given number

#include <stdio.h>
int main() {
    int num, i;

    printf("Enter a number = ");
    scanf("%d", &num);

    printf("Table is given below:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
