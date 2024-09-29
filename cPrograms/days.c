#include <stdio.h>

int main() {
    int days, weeks, remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    remaining_days = days % 7;

    printf("%d days are %d weeks, %d days\n", days, weeks, remaining_days);

    return 0;
}

