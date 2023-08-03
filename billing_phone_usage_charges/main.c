#include <stdio.h>

#define FOREIGN_TARIFF 100
#define OUTSIDE_NETWORK_TARIFF 60
#define INSIDE_NETWORK_TARIFF 40

int main() {
    int n, call_type;
    double call_duration, total_bill = 0.0;

    printf("Enter the number of calls: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Call %d - Type (1-foreign, 2-outside network, 3-inside network): ", i + 1);
        scanf("%d", &call_type);

        printf("Call %d - Duration (in minutes): ", i + 1);
        scanf("%lf", &call_duration);

        switch (call_type) {
            case 1:
                total_bill += FOREIGN_TARIFF * call_duration;
                break;
            case 2:
                total_bill += OUTSIDE_NETWORK_TARIFF * call_duration;
                break;
            case 3:
                total_bill += INSIDE_NETWORK_TARIFF * call_duration;
                break;
            default:
                printf("Invalid call type entered for call %d. Skipping this call.\n", i + 1);
        }
    }

    printf("\nTotal bill: %.2f HUF\n", total_bill);

    return 0;
}
