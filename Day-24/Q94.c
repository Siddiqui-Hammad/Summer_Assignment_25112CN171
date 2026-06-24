//Write a program to Compress a string. 


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed form: ");
    for(int i = 0; str[i] != '\0'; i++) {
        int count = 1;
        while(str[i] == str[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }

    return 0;
}
