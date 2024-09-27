#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeConsecutiveDuplicates(char* str) {
    int n = strlen(str);
    if (n <= 1) return;

    char result[n + 1];  // Temporary result string
    bool duplicatesFound;

    do {
        duplicatesFound = false;
        int j = 0;  // Index for the result array

        for (int i = 0; i < n; i++) {
            // Check if current character and the next character are the same
            if (i < n - 1 && str[i] == str[i + 1]) {
                duplicatesFound = true;
                // Skip over all consecutive duplicate characters
                while (i < n - 1 && str[i] == str[i + 1]) {
                    i++;
                }
            } else {
                // Copy the non-duplicate character to the result
                result[j++] = str[i];
            }
        }
        
        result[j] = '\0';  // Null-terminate the result string
        strcpy(str, result);  // Update the original string with the result
        n = strlen(str);  // Update the length of the string

    } while (duplicatesFound);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeConsecutiveDuplicates(str);

    if (strlen(str) == 0) {
        printf("Final string: Empty\n");
    } else {
        printf("Final string: %s\n", str);
    }

    return 0;
}

