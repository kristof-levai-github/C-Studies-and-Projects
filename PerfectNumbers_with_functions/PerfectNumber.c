#include <stdio.h>
#include <stdbool.h>

// Fv deklarációk
bool isPerfect(int number);
int sumOfDividers(int number);
void readInt(int* numptr);

// Program kezdete
int main()
{
    int i;
    //bool result;

    printf("Tökéletes számok: ");
    for(i = 1; i < 1000; i++) {
        int result = isPerfect(i);
        if (isPerfect(i)) {
            printf("%d, ", i);
        }
    }

    //int num = readInt();
    int num;
    readInt(&num);
    if (isPerfect(num)) {
        printf("\n%d tökéletes\n", num);
    }
    else
        printf("\n%d nem tökéletes\n", num);

    return 0;
}

bool isPerfect(int number) {
    if (number == sumOfDividers(number))
        return true;
    //else
        return false;
}

int sumOfDividers(int number) {
    int divider;
    int sum = 0;

    for (divider = 1; divider < number; divider++) {
        if (number % divider == 0) {
            sum += divider;
        }
    }
    return sum;
}

void readInt(int* numptr) {
    bool ok;
    char ch;
    do {
        ok = true;
        printf("\nAdj meg egy számot: ");
        if (scanf("%d", numptr) != 1 || *numptr < 0) {
            ok = false;
            printf("Hibás beolvasás\n");
            while ((ch = getchar()) != '\n');
        }
    } while(!ok);
}
