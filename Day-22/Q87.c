//Write a program to Character frequency


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // ASCII characters

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    // count frequency
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // print frequency
    printf("Character frequencies:\n");
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}
