//Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, flag = 1;

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // check palindrome
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("String is palindrome\n");
    else printf("String is not palindrome\n");

    return 0;
}
