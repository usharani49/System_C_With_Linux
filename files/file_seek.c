#include <stdio.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("Sample.txt", "a+"); // Open in append and read mode

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Move to the end of the file
    fseek(fp, 0, SEEK_END);
    printf("The current position is %ld\n", ftell(fp)); // Use %ld for long integer (file position)

    // Move the file pointer back to the desired position
    fseek(fp, 5, SEEK_SET);
    printf("The current position is %ld\n", ftell(fp)); // Print new position

    // Write to the file
    fprintf(fp, "Hello\n");

    // Close the file
    fclose(fp);
    return 0;
}

