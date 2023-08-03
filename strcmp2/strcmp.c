#include <stdio.h>
#include <string.h>

void handle_input(char input[]) {
    // Remove newline character from the end of the string
    input[strcspn(input, "\n")] = 0;

    if (strcmp(input, "high") == 0) {
        printf("You entered 'high'.\n");
    } else if (strcmp(input, "low") == 0) {
        printf("You entered 'low'.\n");
    } else {
        printf("Invalid input.\n");
    }
}

int main() {
    char input[10];
    int is_valid_input = 0;

    do {
        printf("Enter either 'high' or 'low': ");
        fgets(input, 10, stdin);

        handle_input(input);
        is_valid_input = (strcmp(input, "high") == 0 || strcmp(input, "low") == 0);
    } while (!is_valid_input);

    return 0;
}
