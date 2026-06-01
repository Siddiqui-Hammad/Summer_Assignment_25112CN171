//Write a program to Count digits in a number
#include <stdio.h>
int main() {
    int num, count = 0, temp;

    printf("Enter a number to calculate count: ");
    scanf("%d", &num);

    temp = num;  

    while (temp != 0) {
        int digit = temp % 10;   
        count++;                 
        temp = temp / 10;        
    }

    printf("count is %d\n", count);

    return 0;
}
