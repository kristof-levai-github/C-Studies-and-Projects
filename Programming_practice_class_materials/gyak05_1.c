#include <stdio.h>
#include <stdlib.h> // rand(), srand() függvényhíváshoz
#include <time.h>   // time() függvényhíváshoz

#define MERET 5

int main()
{
    int i, j;
    int lotto[MERET], jelolt;

    srand(time(0)); 

    for (i = 0; i < MERET;)
    {
        jelolt = rand() % 90 + 1; 

        for (j = 0; j < i; j++)
        {
            if (lotto[j] == jelolt) 
                break;
        }

        if (j == i)
        {
            lotto[i] = jelolt;
            i++;
        }
    }

    // tömb kiírása
    for (i = 0; i < MERET; i++)
    {
        printf("%d. szam: %d\n", i + 1, lotto[i]);
    }

    return 0;
}