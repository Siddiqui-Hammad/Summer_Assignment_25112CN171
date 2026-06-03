//Write a program to Print prime numbers in a range

#include <stdio.h>
int main(){
int num, i ;

  printf("Prime numbers in the range :");
  scanf("%d", &num);
  for ( i =0 ; i<=num; i++){
     if (i%2 == 0)
    printf("%d  ", i);
  
  }

  return 0;
}