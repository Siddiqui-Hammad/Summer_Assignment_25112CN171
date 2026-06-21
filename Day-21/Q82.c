//Write a program to Reverse a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // print in reverse order
    printf("Reversed string = ");
    for(int i = len-1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
