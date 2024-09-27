#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void removeadjdup(char word[]) {
    char uniq[MAX];
    int l = strlen(word);
    int c = -1; // Index for the unique array
    int i;
  
    for(i = 0; i < l; i++) {
        // If current character matches the last one in uniq, we "pop" it
        if(c >= 0 && (uniq[c] == word[i])) {
            c--;
        } else {
            // Add current character to the unique array
            uniq[++c] = word[i];
        }
    }
    uniq[c + 1] = '\0'; // Null-terminate the result
    strcpy(word, uniq); // Copy the result back to the original word
}

int main() {
    char word[MAX];
    printf("Enter a word: ");
    scanf("%s", word); // No & is required for array
    
    removeadjdup(word);
    printf("The word after removing adjacent duplicates is: %s\n", word);
    
    return EXIT_SUCCESS;
}

