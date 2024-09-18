#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void merge(int[], int[]);
void rmEven(int[], int);
void sortedArray(int[], int);

int main() {
    int a[MAX], b[MAX];
    int i;

    printf("Enter array 1 elements:\n");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter array 2 elements:\n");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &b[i]);
    }

    merge(a, b);

    return EXIT_SUCCESS;
}

void merge(int a[], int b[]) {
    int mergedArray[MAX + MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        mergedArray[i] = a[i];
    }

    for (i = 0; i < MAX; i++) {
        mergedArray[MAX + i] = b[i];
    }

    printf("Merged Array:\n");
    for (i = 0; i < MAX + MAX; i++) {
        printf("%d ", mergedArray[i]);
    }
    
    rmEven(mergedArray, MAX + MAX);
}

void rmEven(int mergedArray[], int size) {
    int filteredArray[MAX + MAX];
    int count = 0;
    int i;

    printf("\nAfter removing even numbers:\n");
    for (i = 0; i < size; i++) {
        if (mergedArray[i] % 2 != 0) {
            filteredArray[count] = mergedArray[i];
            count++;
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", filteredArray[i]);
    }

    sortedArray(filteredArray, count);
}

void sortedArray(int array[], int size) {
    int i, j, temp;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nAfter sorting the array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

