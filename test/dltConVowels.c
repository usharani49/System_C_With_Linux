#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase to handle both cases
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int removeConsecutiveVowelPairs(char str[]) {
    int len = strlen(str);
    int i, j;
    int foundVowelPair = 1;
    int deletions = 0; // Counter for number of deletions

    // Repeat the process until no consecutive vowel pairs are found
    while (foundVowelPair) {
        foundVowelPair = 0; // Reset flag
        for (i = 0; i < len - 1; i++) {
            if (isVowel(str[i]) && isVowel(str[i + 1])) {
                foundVowelPair = 1; // Mark that we found a vowel pair
                deletions++; // Increment the deletion counter

                // Remove the consecutive vowels
                for (j = i; j < len - 2; j++) {
                    str[j] = str[j + 2];
                }
                str[len - 2] = '\0'; // Shrink the string
                str[len - 1] = '\0';
                len -= 2; // Adjust the length of the string
                break; // Start again from the beginning
            }
        }
    }

    return deletions; // Return the total number of deletions
}

int main() {
    char str[MAX];
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]='\0';
    // Call the function and get the number of deletions
    int deletionCount = removeConsecutiveVowelPairs(str);

    printf("Total deletions of consecutive vowels: %d\n", deletionCount);
    return 0;
}

