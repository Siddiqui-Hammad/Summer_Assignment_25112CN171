//Write a program to Remove duplicate characters.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    char res[100];
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // keep only first occurrence
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] == 0) {
            res[j++] = str[i];
            freq[(int)str[i]] = 1;
        }
    }
    res[j] = '\0';

    printf("String without duplicates = %s\n", res);
    return 0;
}
