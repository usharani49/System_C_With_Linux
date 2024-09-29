#include <stdio.h>
#define MINUTES_IN_HOUR 60

int main() {
    int minutes, hours;

    printf("Enter the time in minutes: ");
    scanf("%d", &minutes);

    hours = minutes / MINUTES_IN_HOUR;
    minutes = minutes % MINUTES_IN_HOUR;

    printf("%d hours and %d minutes\n", hours, minutes);

    return 0;
}

