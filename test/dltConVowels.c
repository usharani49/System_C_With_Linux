#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a character is a vowel
bool isVowel(char ch) {
    char vowels[] = "aeiouAEIOU"; // Case insensitive vowels
    for (int i = 0; i < 10; i++) {
        if (ch == vowels[i]) {
            return true;
        }
    }
    return false;
}

// Function to remove consecutive vowel pairs and count deletions
int removeVowelPairs(char* str) {
    int n = strlen(str);
    int deletionCount = 0;  // To count the number of deletions
    char result[n + 1];     // Temporary result string
    
    int j = 0;  // Index for the result array
    
    for (int i = 0; i < n; i++) {
        // Check if current character and next character form a vowel pair
        if (i < n - 1 && isVowel(str[i]) && isVowel(str[i + 1])) {
            deletionCount++;  // Increment deletion count
            i++;  // Skip the next character (forming a pair)
        } else {
            // Copy the non-vowel-pair character to the result
            result[j++] = str[i];
        }
    }
    
    result[j] = '\0';  // Null-terminate the result string
    strcpy(str, result);  // Copy the result back to the original string
    
    return deletionCount;  // Return the number of deletions
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int deletions = removeVowelPairs(str);

    printf("Modified string: %s\n", str);
    printf("Number of deletions: %d\n", deletions);

    return 0;
}

