#include <stdio.h>

int main() {
    FILE *fp = NULL;
    int ret_val = 0;
    int num;

    // Step 1: Open the file in write mode and write a number
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("fopen() failed\n");
        return 1;
    }

    // Write a number to the file
    fprintf(fp, "42"); // You can change the number as needed
    ret_val = fclose(fp);
    if (ret_val != 0) {
        printf("fclose failed\n");
        return 1;
    }

    // Step 2: Open the file in read mode and read the number
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("fopen() failed\n");
        return 1;
    }

    ret_val = fscanf(fp, "%d", &num);
    if (ret_val == EOF) {
        printf("fscanf failed\n");
        
        ret_val = fclose(fp);
        if (ret_val != 0) {
            printf("fclose failed\n");
            return 1;
        }
        return 1;
    }

    printf("The num is %d\n", num);

    ret_val = fclose(fp);
    if (ret_val != 0) {
        printf("fclose failed\n");
        return 1;
    }
    return 0;
}

