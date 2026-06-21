//Write a program to Find string length without strlen()

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    // count characters until '\0'
    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of string = %d\n", length);
    return 0;
}
