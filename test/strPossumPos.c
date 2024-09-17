#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LINE_LENGTH 100
#define MAX_WORD_LENGTH 50

void searchInLine(const char* line, char searchChar, const char* searchWord) {
    int i, posCharSum = 0, posWordSum = 0;
    int lineLength = strlen(line);
    int wordLength = strlen(searchWord);

    
    printf("Searching for character '%c' in line: \"%s\"\n", searchChar, line);
    for (i = 0; i < lineLength; i++) {
        if (line[i] == searchChar) {
            printf("Character '%c' found at position: %d\n", searchChar, i + 1);
            posCharSum += (i + 1);
        }
    }

    printf("Searching for word \"%s\" in line: \"%s\"\n", searchWord, line);
    for (i = 0; i <= lineLength - wordLength; i++) {
        if (strncmp(&line[i], searchWord, wordLength) == 0) {
            printf("Word \"%s\" found starting at position: %d\n", searchWord, i + 1);
            posWordSum += (i + 1);
        }
    }

  
    if (posCharSum > 0) {
        printf("Sum of positions of character '%c': %d\n", searchChar, posCharSum);
    } else {
        printf("Character '%c' not found in line.\n", searchChar);
    }
    
    if (posWordSum > 0) {
        printf("Sum of positions of word \"%s\": %d\n", searchWord, posWordSum);
    } else {
        printf("Word \"%s\" not found in line.\n", searchWord);
    }
}

int main() {
    int n, i;
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    char searchChar;
    char searchWord[MAX_WORD_LENGTH];

    printf("Enter the number of lines: ");
    scanf("%d", &n);
    getchar(); 

    printf("Enter %d lines of input:\n", n);
    for (i = 0; i < n; i++) {
        printf("Line %d: ", i + 1);
        fgets(lines[i], sizeof(lines[i]), stdin);
        lines[i][strcspn(lines[i], "\n")] = '\0';
    }

    printf("\nEnter the character to search: ");
    scanf(" %c", &searchChar);
    getchar(); 

    printf("\nEnter the word to search: ");
    fgets(searchWord, sizeof(searchWord), stdin);

    searchWord[strcspn(searchWord, "\n")] = '\0';

    for (i = 0; i < n; i++) {
        searchInLine(lines[i], searchChar, searchWord);
        printf("\n");
    }

    return 0;
}

