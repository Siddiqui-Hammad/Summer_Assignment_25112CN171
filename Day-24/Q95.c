//Write a program to Find longest word


#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int len = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int i = 0, j = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if(strlen(word) > len) {
                len = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    // check last word
    word[j] = '\0';
    if(strlen(word) > len) strcpy(longest, word);

    printf("Longest word = %s\n", longest);
    return 0;
}
