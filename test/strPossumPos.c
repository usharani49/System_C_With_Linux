#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int findCharPos(char *str, char ch) {
    int c = 0;
    int i = 0;
    int sumPos = 0;

    printf("Character %c found at positions: ", ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            printf("%d ", i);
            sumPos += i;
            c++;
        }
        i++;
    }
    if (c == 0) {
        printf("not found\n");
    }
    printf("\n");
    return sumPos;
}

int findWordPos(char *str, char *word) {
    int sumPos = 0;
    int c = 0;
    char *pos = str;

    printf("Word %s found at positions: ", word);

    while ((pos = strstr(pos, word)) != NULL) {
        int p = (int)(pos - str);
        printf("%d ", p);
        sumPos += p;
        c++;
        pos += strlen(word);
    }

    if (c == 0) {
        printf("not found");
    }

    printf("\n");
    return sumPos;
}

int main() {
    int n;
    printf("Enter number of lines:\n");
    scanf("%d", &n);
    getchar(); // To consume the newline after entering number

    char str[n][MAX];

    printf("Enter %d lines:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(str[i], MAX, stdin);
        str[i][strcspn(str[i], "\n")] = '\0'; // Remove newline character
    }

    char ch;
    printf("\nEnter a character:\n");
    scanf("%c", &ch);
    getchar(); // Consume newline after character input

    char word[MAX];
    printf("Enter a word:\n");
    scanf("%s", word);

    printf("The %d strings are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    printf("The character is: %c\n", ch);
    printf("The word is: %s\n", word);

    for (int i = 0; i < n; i++) {
        printf("\nIn string %d: %s\n", i + 1, str[i]);

        int charSum = findCharPos(str[i], ch);
        printf("Sum of character '%c' positions: %d\n", ch, charSum);

        int wordSum = findWordPos(str[i], word);
        printf("Sum of word '%s' positions: %d\n", word, wordSum);
    }

    return EXIT_SUCCESS;
}

