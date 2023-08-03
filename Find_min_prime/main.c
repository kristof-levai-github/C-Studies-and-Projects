#include <stdio.h>

int is_prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int numbers[10];
    printf("Enter 10 positive integers:\n");
    
    // Input 10 positive integers
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] <= 0) {
            printf("Please enter only positive integers.\n");
            return 1;
        }
    }

    int smallest_prime = -1; // Initialize with a value indicating no prime found

    for (int i = 0; i < 10; i++) {
        if (is_prime(numbers[i])) {
            if (smallest_prime == -1 || numbers[i] < smallest_prime) {
                smallest_prime = numbers[i];
            }
        }
    }
    
    if (smallest_prime != -1) {
        printf("The smallest prime number in the array is: %d\n", smallest_prime);
    } else {
        printf("Not found\n");
    }

    return 0;
}
