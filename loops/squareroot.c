#include <stdio.h>
#include <math.h>

int main() {
    int num, lower_sqrt, upper_sqrt, lower_square, upper_square;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    lower_sqrt = (int)sqrt(num);
    upper_sqrt = lower_sqrt + 1;

    lower_square = lower_sqrt * lower_sqrt;
    upper_square = upper_sqrt * upper_sqrt;

    if ((num - lower_square) <= (upper_square - num)) {
        printf("Closest perfect square: %d\n", lower_square);
    } else {
        printf("Closest perfect square: %d\n", upper_square);
    }

    return 0;
}

