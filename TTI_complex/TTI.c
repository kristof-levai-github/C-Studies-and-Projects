#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

// Saját fv deklarációk
void fillArrayRandom(int* array, int size);
void listDoubleArray(double* array, int size);
void listIntArray(int* array, int size);
double computeTTI(int weight, double height);

int main()
{
    int i;
    double height[SIZE] = {1.20, 1.16, 1.52, 1.18, 1.34};
    int weight[SIZE];
    double tti[SIZE];
    enum category {THIN, NORMAL, FAT};

    fillArrayRandom(weight, SIZE);
    printf("\nMagasság: ");
    listDoubleArray(height, SIZE);
    printf("\nTömeg: ");
    listIntArray(weight, SIZE);

    // tti tömb feltöltése
    for (i = 0; i < SIZE; i++) {
        tti[i] = computeTTI(weight[i], height[i]);
    }
    printf("\nTTI tömb: ");
    listDoubleArray(tti, SIZE);

    //szöveg beolvasása
    //HF: ellenőrzött beolvasás, nagybetűre konverzió
    //külön fv-ben
    char str[7];
    printf("\nAdja meg a kategóriát: ");
    scanf("%s", str);

    //ha a category változót kihasználljuk, akkor
    //lehet switch-et használni
    if (strcmp(str, "THIN") == 0) {
        printf("Soványak: ");
        for (i = 0; i < SIZE; i++) {
            if (tti[i] < 18.5)
                printf("%d, ", i);
        }
    }
    else if (strcmp(str, "NORMAL") == 0) {
        printf("Normálisak: ");
        for (i = 0; i < SIZE; i++) {
            if (tti[i] >= 18.5 && tti[i] <= 25)
                printf("%d, ", i);
        }
    }
    else if (strcmp(str, "FAT") == 0) {
        printf("Elhízottak: ");
        for (i = 0; i < SIZE; i++) {
            if (tti[i] > 25)
                printf("%d, ", i);
        }
    }
    else
        printf("Nem értelmezett kategória");

    return 0;
}

void fillArrayRandom(int* array, int size) {
    int i;
    int lower = 35;
    int upper = 50;

    srand(time(0));

    for (i = 0; i < size; i++) {
        array[i] = rand() % (upper - lower + 1) + lower;
    }
}

void listDoubleArray(double* array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%.2lf, ", array[i]);
    }
}

void listIntArray(int* array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
}

double computeTTI(int weight, double height) {
    return weight / (height * height);
}
