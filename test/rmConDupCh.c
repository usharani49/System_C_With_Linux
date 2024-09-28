#include <stdio.h>
#include <string.h>

void removeConsecutiveDuplicates(char str[]) {
    int len = strlen(str);
    int i, j;
    int foundDuplicate = 1;

    // Repeat the process until no consecutive duplicates are found
    while (foundDuplicate) {
        foundDuplicate = 0; // Reset flag
        for (i = 0; i < len - 1; i++) {
            if (str[i] == str[i + 1]) {
                foundDuplicate = 1; // Mark that we found a duplicate
                // Remove the consecutive duplicates
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
}

int main() {
    char str[] = "abbaccd";
    printf("Original string: %s\n", str);
    removeConsecutiveDuplicates(str);
    printf("Final string: %s\n", str);
    return 0;
}

