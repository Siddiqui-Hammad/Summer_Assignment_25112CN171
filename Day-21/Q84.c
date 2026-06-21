//Write a program to Convert lowercase to uppercase

#include <stdio.h>

int main() {
    char str[100];

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    // convert each character
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII conversion
        }
    }

    printf("Uppercase string = %s\n", str);
    return 0;
}
