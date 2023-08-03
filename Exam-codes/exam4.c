#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

// Function to fill the height array with random values between 135 and 190
void fillArray(int *array)
{
    int i;
    for (i = 0; i < SIZE; i++) {
        array[i] = 135 + rand() % (190 - 135 + 1);
    }
}

// Function to sort the height array in ascending order
void sortArray(int *array)
{
    int i, j, temp;
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Function to print the height array
void printArray(int *array)
{
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%dcm\n", array[i]);
    }
}

// Function to check if the input string is "magas" or "alacsony"
int checkInputString(char *input)
{
    int result = strcmp(input, "magas");
    if (result == 0) {
        return 1;
    } else {
        result = strcmp(input, "alacsony");
        if (result == 0) {
            return 2;
        }
    }
    return 0;
}

// Function to print only the elements of the height array that match the input string
void printMatchingElements(int *array, char *input)
{
    int i;
    for (i = 0; i < SIZE; i++) {
        if (array[i] < 160 && strcmp(input, "alacsony") == 0) {
            printf("%dcm - alacsony\n", array[i]);
        } else if (array[i] >= 160 && strcmp(input, "magas") == 0) {
            printf("%dcm - magas\n", array[i]);
        }
    }
}

int main()
{
    int heightArray[SIZE];
    char input[10];

    fillArray(heightArray);
    sortArray(heightArray);
    printf("Rendezett magassagok:\n");
    printArray(heightArray);

    do {
        printf("Magas vagy alacsony (magas/alacsony): ");
        scanf("%s", input);
    } while (checkInputString(input) == 0);

    printf("A megfelelo magassagok:\n");
    printMatchingElements(heightArray, input);

    return 0;
}
