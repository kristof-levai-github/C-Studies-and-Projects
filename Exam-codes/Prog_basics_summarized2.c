#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 10
#define min 0
#define max 50

void fillRandomArray(int arr[SIZE]);
void sortArray(int arr[SIZE]);
void printArray(int arr[SIZE]);
void reverseArray(int arr[SIZE]);
void printArrayReverse(int arr[SIZE]);
int findMin(int arr[SIZE]);
int findMax(int arr[SIZE]);
void findNumber(int arr[SIZE]);
void readOneString(char pass[20]);
int countPass(int arr[SIZE], char pass[20]);

int main() {
    int arr[SIZE];

    fillRandomArray(arr);
    printf("A tömb feltöltésre került!\n");

    sortArray(arr);
    printf("A tömb elemei:\n");
    printArray(arr);

    printf("A tömb elemei fordított sorrenden:\n");
    reverseArray(arr);
    printArrayReverse(arr);

    printf("A legkisebb elem: %d\n", findMin(arr));
    printf("A legnagyobb elem: %d\n", findMax(arr));

    findNumber(arr);

    char pass[20];
    readOneString(pass);

    int passCount = countPass(arr, pass);
    printf("Sikeres dolgozatok száma: %d\n", passCount);

    printf("Press enter to exit...");
    getchar();  // Wait for user input

    return 0;
}

void fillRandomArray(int arr[SIZE]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void sortArray(int arr[SIZE]) {
    int temp;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        printf("A tömb %d. eleme: %d\n", i + 1, arr[i]);
    }
}

void reverseArray(int arr[SIZE]) {
    int temp;
    for (int i = 0; i < SIZE / 2; i++) {
        temp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = temp;
    }
}

void printArrayReverse(int arr[SIZE]) {
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("A tömb %d. eleme: %d\n", i + 1, arr[i]);
    }
}

int findMin(int arr[SIZE]) {
    int mini = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    return mini;
}

int findMax(int arr[SIZE]) {
    int maxi = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

void findNumber(int arr[SIZE]) {
    int number = 40;
    int found = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == number) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Van ilyen szám!\n");
    } else {
        printf("Nincs ilyen szám!\n");
    }
}

void readOneString(char pass[20]) {
    do {
        printf("Kérem adja meg a vizsga sikeres voltát (sikeres) vagy sikertelenségét (sikertelen): ");
        if (scanf("%19s", pass) != 1) {
            printf("Hibás adatmegadás\n");
            while (getchar() != '\n');
            continue;
        }
        if (strcmp(pass, "sikeres") == 0 || strcmp(pass, "sikertelen") == 0) {
            return;
        }
    } while (1);
}

int countPass(int arr[SIZE], char pass[20]) {
    int count = 0;
    if (strcmp(pass, "sikeres") == 0) {
        for (int i = 0; i < SIZE; i++) {
            if (arr[i] >= 25) {
                count++;
            }
        }
    } else {
        for (int i = 0; i < SIZE; i++) {
            if (arr[i] < 25) {
                count++;
            }
        }
    }
    return count;
}
