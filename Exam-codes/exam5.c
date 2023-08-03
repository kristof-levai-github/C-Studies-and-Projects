#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define YEARS 10
#define MIN_REVENUE 15000
#define MAX_REVENUE 85000

void fill_array(int arr[YEARS]) {
    srand(time(NULL));
    for (int i = 0; i < YEARS; i++) {
        arr[i] = MIN_REVENUE + rand() % (MAX_REVENUE - MIN_REVENUE + 1);
    }
}

void print_array(int arr[YEARS]) {
    for (int i = 0; i < YEARS; i++) {
        printf("Year %d: $%d\n", i + 1, arr[i]);
    }
}

int sum_of_revenues(int arr[YEARS]) {
    int sum = 0;
    for (int i = 0; i < YEARS; i++) {
        sum += arr[i];
    }
    return sum;
}

//ezt máshogy beolvastatni, mert így azért elég gyász ez az egész
void read_period(int *start, int *end) {
    while (1) {
        printf("Enter start year (1-10): ");
        scanf("%d", start);
        if (*start >= 1 && *start <= 10) {
            break;
        }
        printf("Invalid input. Please try again.\n");
    }
    while (1) {
        printf("Enter end year (1-10): ");
        scanf("%d", end);
        if (*end >= 1 && *end <= 10 && *end >= *start) {
            break;
        }
        printf("Invalid input. Please try again.\n");
    }
}

void print_percentages(int arr[YEARS], int start, int end, int total) {
    for (int i = start - 1; i < end; i++) {
        printf("Year %d: %.2f%%\n", i + 1, (float) arr[i] / total * 100);
    }
}

int main() {
    int revenues[YEARS];
    fill_array(revenues);
    printf("Revenue by year:\n");
    print_array(revenues);
    int total_revenue = sum_of_revenues(revenues);
    printf("Total revenue: $%d\n", total_revenue);
    
    int start, end;
    read_period(&start, &end);
    
    printf("Revenue percentage by year in the selected period:\n");
    print_percentages(revenues, start, end, total_revenue);
    return 0;
}
