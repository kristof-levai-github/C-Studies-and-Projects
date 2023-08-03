#include <stdio.h>

#define QUARTER_WEEKS 12
#define THRESHOLD 400

int main() {
    double exchange_rate[QUARTER_WEEKS];
    int count_below_threshold = 0;

    printf("Enter the exchange rate values for each week (HUF / EUR):\n");

    for (int i = 0; i < QUARTER_WEEKS; i++) {
        printf("Week %d: ", i + 1);
        while (scanf("%lf", &exchange_rate[i]) != 1 || exchange_rate[i] <= 0) {
            printf("Invalid input. Please enter a positive real value: ");
            while (getchar() != '\n'); // Clear input buffer
        }
    }

    for (int i = 0; i < QUARTER_WEEKS; i++) {
        if (exchange_rate[i] < THRESHOLD) {
            count_below_threshold++;
        }
    }

    printf("\nDuring the quarter, the exchange rate was below %d HUF %d times.\n", THRESHOLD, count_below_threshold);

    return 0;
}
