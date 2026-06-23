//Write a program to Check anagram strings


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    // input two strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // if lengths differ, not anagram
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams\n");
        return 0;
    }

    // count characters
    for(int i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }

    // check all counts
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}
