#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, sum = 0, digit, digits = 0, temp;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the number of digits in the number
    temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    original_num = num;
    while (num > 0) {
        digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    // Check if the sum equals the original number
    if (sum == original_num) {
        printf("%d is an Armstrong number\n", original_num);
    } else {
        printf("%d is not an Armstrong number\n", original_num);
    }

    return 0;
}

