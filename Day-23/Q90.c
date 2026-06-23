//Write a program to Find first repeating character.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    // check first repeating
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if(freq[(int)str[i]] > 1) {
            printf("First repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found\n");
    return 0;
}
