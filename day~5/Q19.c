//Write a program to Print factors of a number

#include<stdio.h>

int main(){
int num , i , t ;
printf("Enter a number : ");
scanf("%d", &num );

// Printing factors 
for ( i= 1 ; i <= num/2 ; i++){
 t = num % i ;
 if ( t == 0){
  printf("%d  ", i );
 }

} 
return 0;
}