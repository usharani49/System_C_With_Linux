#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_LEN 100

// Function to sort characters of a string
void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to check if all words are anagrams
bool areAllWordsAnagrams(char words[][MAX_LEN], int count) {
    char sortedWords[count][MAX_LEN];

    // Sort characters of each word
    for (int i = 0; i < count; i++) {
        strcpy(sortedWords[i], words[i]);
        sortString(sortedWords[i]);
    }

    // Compare sorted versions of all words
    for (int i = 1; i < count; i++) {
        if (strcmp(sortedWords[i], sortedWords[0]) != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[MAX_LEN * MAX_WORDS];
    char words[MAX_WORDS][MAX_LEN];
    int count = 0;

    printf("Enter comma-separated words: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    // Split input into words based on commas
    char *token = strtok(input, ",");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, ",");
    }

    // Check if all words are anagrams
    if (areAllWordsAnagrams(words, count)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}


