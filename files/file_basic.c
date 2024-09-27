#include<stdio.h>

int copy_file(FILE *, FILE *);

int main() {
    FILE *input, *output;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Failed to open output file.\n");
        fclose(input); // Close the input file before exiting
        return 1;
    }

    int ret_val = copy_file(input, output);
    if (ret_val != 0) {
        printf("Copy failed\n");
        fclose(input);
        fclose(output);
        return 1;
    }

    fclose(input);
    fclose(output);

    return 0;
}

int copy_file(FILE *input, FILE *output) {
    int file_char;

    while ((file_char = fgetc(input)) != EOF) {
        if (fputc(file_char, output) == EOF) {
            printf("fputc failed\n");
            return 1;
        }
    }

    return 0;
}

