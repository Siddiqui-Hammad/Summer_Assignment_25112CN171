//Write a program to Remove spaces from string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200] = "";
    char temp[2];

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            temp[0] = str[i];
            temp[1] = '\0';
            strcat(result, temp);
        }
    }

    printf("String without spaces = %s\n", result);

    return 0;
}