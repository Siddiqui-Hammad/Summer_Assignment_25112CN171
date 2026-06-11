//Write a program to Find product of digits
#include <stdio.h>
int main(){
int num, product = 1, temp;

    printf("Enter a number to calculate product: ");
    scanf("%d", &num);

    temp = num;  

    while (temp != 0) {
        int digit = temp % 10;   
        product = product * digit;            
        temp = temp / 10;        
    }

    printf("Product of digits is %d\n", product);

    return 0;

}