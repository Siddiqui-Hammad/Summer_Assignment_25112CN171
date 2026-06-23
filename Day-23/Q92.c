//Write a program to Find maximum occurring character


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);

    // count frequency
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if(freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", result);
    return 0;
}
