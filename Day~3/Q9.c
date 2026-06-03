//Write a program to Check whether a number is prime

#include <stdio.h>
int main(){
int num ;
  printf("Enter a number to check prime: ");
  scanf("%d", &num);
  if (num%2 == 0)
    printf("%d is prime number", num);
    else 
    printf("%d is not a prime number ", num);
return 0;
  }


