#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void fillArrayRandom(int *arr);
void printArrayBackwards(int *arr);
void readOneString(char* pass);
int countPass(int *arr, char* pass);

int main() {
    int scores[10];

    fillArrayRandom(scores);
    printArrayBackwards(scores);

    char pass[20];
    readOneString(pass);
    printf("%d dolgozat lett %s", countPass(scores, pass), pass);
    printf("");

    return 0;
}

void fillArrayRandom(int *arr) {
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 50;
    }
}

void printArrayBackwards(int *arr) {
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void readOneString(char* pass) {
    do
    {
        printf("Kerlek add meg a vizsga sikeresseget (sikeres) vagy sikertelenseget (sikertelen): ");
        if (scanf("%s", pass) != 1) {
            printf("Hibas adatmegadas");
            while (getchar() != '\n');
            continue;
        }
        if (strcmp(pass, "sikeres") == 0 || strcmp(pass, "sikertelen") == 0) return;
    } while (1);
}

int countPass(int *arr, char* pass) {
    int count = 0;
    if (strcmp(pass, "sikeres") == 0) {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] >= 25) count++;
        }
    } else {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] < 25) count++;
        }
    }
    return count;
}
