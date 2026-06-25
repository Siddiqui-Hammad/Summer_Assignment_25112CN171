//Write a program to Sort words by length.


#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][50], temp[50];

    // input words
    printf("Enter %d words:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // sort by length
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(strlen(words[j]) > strlen(words[j+1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
