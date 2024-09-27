#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

// Function to check if two words are anagrams
bool areAnagrams(char *word1, char *word2) {
    char sorted1[MAX_LEN], sorted2[MAX_LEN];
    strcpy(sorted1, word1);
    strcpy(sorted2, word2);
    sortString(sorted1);
    sortString(sorted2);
    return strcmp(sorted1, sorted2) == 0;
}

// Function to find unique words (neither identical nor anagrams)
void findUniqueWords(char words[][MAX_LEN], int count) {
    bool isUnique[MAX_WORDS];

    // Initialize all words as unique
    for (int i = 0; i < count; i++) {
        isUnique[i] = true;
    }

    // Compare each word with every other word
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) == 0 || areAnagrams(words[i], words[j])) {
                isUnique[i] = false;
                isUnique[j] = false;
            }
        }
    }

    // Print unique words
    bool found = false;
    printf("Unique words: ");
    for (int i = 0; i < count; i++) {
        if (isUnique[i]) {
            if (found) {
                printf(", ");
            }
            printf("%s", words[i]);
            found = true;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
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

    // Trim leading/trailing spaces from each word
    for (int i = 0; i < count; i++) {
        char *start = words[i];
        while (*start == ' ') start++; // Skip leading spaces
        memmove(words[i], start, strlen(start) + 1);

        char *end = words[i] + strlen(words[i]) - 1;
        while (end > words[i] && *end == ' ') end--; // Remove trailing spaces
        *(end + 1) = '\0';
    }

    findUniqueWords(words, count);

    return 0;
}


