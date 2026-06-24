//Write a program to Check string rotation.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is substring of temp
    if(strstr(temp, str2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations\n");

    return 0;
}
