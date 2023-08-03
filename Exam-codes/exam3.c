#include <stdio.h>

typedef struct time{
    int hh, pp, mp;
}Time[3];

typedef struct {
    Time times;
} racer;

void printRacers(int num, racer *arr);
int calculateSeconds(Time time);
int chooseBestRace(racer *arr);
void chooseBetterRacer(Time time1, Time time2);
void printCycles(int num, racer *arr);
double calculateOneCycle(Time time);

int main() {
    
    racer racers[2] = {
        {{{1, 36, 12}, {1, 36, 20}, {1, 40, 23}}},    
        {{{1, 42, 45}, {1, 44, 25}, {1, 43, 20}}}
    };

    printRacers(0, &racers[0]);
    printRacers(1, &racers[1]);
    int fastestIndex1 = chooseBestRace(&racers[0]);
    printf("1. versenyzo leggyorsabb ideje: %d. %d masodperccel (%dh %dm %ds)\n", fastestIndex1 + 1, calculateSeconds(&racers[0].times[fastestIndex1]), racers[0].times[fastestIndex1].hh, racers[0].times[fastestIndex1].pp, racers[0].times[fastestIndex1].mp);
    int fastestIndex2 = chooseBestRace(&racers[1]);
    printf("2. versenyzo leggyorsabb ideje: %d. %d masodperccel (%dh %dm %ds)\n", fastestIndex2 + 1, calculateSeconds(&racers[1].times[fastestIndex2]), racers[1].times[fastestIndex2].hh, racers[1].times[fastestIndex2].pp, racers[1].times[fastestIndex2].mp);

    FILE *pF = fopen("racer.txt", "w");
    fprintf(pF, "1. versenyzo leggyorsabb ideje: %d. %d masodperccel (%dh %dm %ds)\n", fastestIndex1 + 1, calculateSeconds(&racers[0].times[fastestIndex1]), racers[0].times[fastestIndex1].hh, racers[0].times[fastestIndex1].pp, racers[0].times[fastestIndex1].mp);
    fprintf(pF, "2. versenyzo leggyorsabb ideje: %d. %d masodperccel (%dh %dm %ds)\n", fastestIndex2 + 1, calculateSeconds(&racers[1].times[fastestIndex2]), racers[1].times[fastestIndex2].hh, racers[1].times[fastestIndex2].pp, racers[1].times[fastestIndex2].mp);
    fclose(pF);

    chooseBetterRacer(&racers[0].times[fastestIndex1], &racers[1].times[fastestIndex2]);

    printf("--------------\n");
    printf("A(z) 1. versenyzo atlagos idejei:\n");
    printf("--------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. ido koratlaga: %.2lf masodperc | ", i + 1, calculateOneCycle(&racers[0].times[i]));
    }

    printf("--------------\n");
    printf("A(z) 2. versenyzo atlagos idejei:\n");
    printf("--------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. ido koratlaga: %.2lf masodperc | ", i + 1, calculateOneCycle(&racers[1].times[i]));
    }

    return 0;
}

void printRacers(int num, racer *arr) {
    printf("%d. versenyzo: ", num + 1);
    for (int i = 0; i < 3; i++)
    {
        printf("%d:%d:%d ", arr->times[i].hh, arr->times[i].pp, arr->times[i].mp);
    }
    printf("\n");
}

int calculateSeconds(Time time) {
    return time->hh * 3600 + time->pp * 60 + time->mp;
}

int chooseBestRace(racer *arr) {
    int lowestIndex = 0;
    int lowestScore = calculateSeconds(&arr->times[0]);

    for (int i = 1; i < 3; i++)
    {
        int current = calculateSeconds(&arr->times[i]);
        if (current < lowestScore) {
            lowestScore = current;
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

void chooseBetterRacer(Time time1, Time time2) {
    if (calculateSeconds(time1) < calculateSeconds(time2)) {
        printf("Az elso versenyzo fog az elso helyrol indulni, a masodik pedig a mosodikrol.\n");
    } else {
        printf("Az elso versenyzo fog a masodik helyrol indulni, a masodik pedig az elsorol.\n");
    }
}

double calculateOneCycle(Time time) {
    return calculateSeconds(time) / (double)35;
}