#include <stdio.h>
#include <math.h>

int main() {
    int num, square, last_digits, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    // Calculate the number of digits in the original number
    temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // Extract the last digits from the square
    last_digits = square % (int)pow(10, digits);

    if (last_digits == num) {
        printf("%d is an Automorphic number\n", num);
    } else {
        printf("%d is not an Automorphic number\n", num);
    }

    return 0;
}

