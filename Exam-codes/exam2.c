#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printRacersAndIndex(char **racers, int *index);
void sortArrays(char **racers, int *index);
int calculatePoints(char **racers, int *index, char *racer);
void printRacerToFile(char *racer, int num);
int readSingleNumber();
void searchSingleRacer(char **racers, int *index, int num);

int main() {
    char *racers[5] = { "Hamilton", "Verstappen", "Vettel", "Leclerc", "Raikonnen"};
    int racerIndex[5];

    srand(time(0));

    int temp, ok;
    for (int i = 0; i < 5;)
    {
        temp = rand() % 20 + 1;
        ok = 1;
        for (int i = 0; i < 5; i++)
        {
            if (temp == racerIndex[i]) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            racerIndex[i] = temp;
            i++;
        }
    }
    printRacersAndIndex(racers, racerIndex);
    sortArrays(racers, racerIndex);
    for (int i = 0; i < 5; i++)
    {
        calculatePoints(racers, racerIndex, racers[i]);
    }

    int searchNum = readSingleNumber();
    searchSingleRacer(racers, racerIndex, searchNum);

    return 0;
}

void printRacersAndIndex(char **racers, int *index) {
    for (int i = 0; i < 5; i++)
    {
        printf("%d | %s\n", index[i], racers[i]);
    }
}

void sortArrays(char **racers, int *index) {
    int temp;
    char *tempName;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (index[i] < index[j]) {
                temp = index[j];
                index[j] = index[i];
                index[i] = temp;
                tempName = racers[j];
                racers[j] = racers[i];
                racers[i] = tempName;
            }
        }
        
    }
    printf("-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d | %s\n", index[i], racers[i]);
    }
}

int calculatePoints(char **racers, int *index, char *racer) {
    int points;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(racers[i], racer) == 0) {
            points = index[i] > 6 ? 0 : 1 << (6 - index[i]);
            printf("%s pontszama: %d\n", racer, points);
            printRacerToFile(racer, points);
        }
    }
}

void printRacerToFile(char *racer, int num) {
    FILE *pF = fopen("racer2.txt", "a");
    fprintf(pF, "%s pontszáma: %d\n", racer, num);
}

int readSingleNumber() {
    int temp;
    do {
        printf("Kerlek add meg a keresni kivánt helyezett szamat: ");
        if (scanf("%d", &temp) != 1) {
            printf("Hibas adatmegadas!");
            while (getchar() != '\n');
            continue;
        }
        return temp;
    } while (1);
}

void searchSingleRacer(char **racers, int *index, int num) {
    for (int i = 0; i < 5; i++)
    {
        if (index[i] != num) {
            continue;
        } else {
            printf("A %d. helyezest elert versenyzo: %s", num, racers[i]);
            return;
        }
    }
    printf("Ilyen helyezessel nem talalhato versenyzo a tombben.");
}