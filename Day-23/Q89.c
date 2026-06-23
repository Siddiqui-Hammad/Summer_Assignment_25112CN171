//Write a program to Find first non-repeating character


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    // count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // find first non‑repeating character
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("First non‑repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non‑repeating character found\n");
    return 0;
}
