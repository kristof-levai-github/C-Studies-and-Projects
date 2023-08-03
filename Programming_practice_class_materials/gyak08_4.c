#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5000

void int_beolvas(int *x)
{
    char ch;
    int ok;
    do
    {
        ok = 1;
        printf("Adj meg egy szamot: ");
        if (scanf("%d", x) != 1)
        {
            printf("Hibas input\n");

            while ((ch = getchar()) != '\n')
                ;
            ok = 0;
        }
    } while (!ok || *x < 0);
    return;
}

int kisebboszto_osszeg(int szam)
{
    int osszeg, oszto;
    osszeg = 0;
    for (oszto = 1; oszto <= szam / 2; oszto += 1)
    {
        if (szam % oszto == 0)
            osszeg += oszto;
    }
    return osszeg;
}

int baratsagos(int a, int b)
{
    if (a == kisebboszto_osszeg(b) && b == kisebboszto_osszeg(a))
        return 1;
    return 0;
}

int main()
{

    int alsohatar, felsohatar, i, j;
    printf("kerem az also hatart: ");
    int_beolvas(&alsohatar);

    srand(time(NULL));
   
    do
    {
        printf("kerem a felso hatart: ");
        int_beolvas(&felsohatar);
    } while (felsohatar < alsohatar);

    int tomb[N];
    for (size_t i = 0; i < N; i++)
    {
        tomb[i] = rand() % (felsohatar - alsohatar) + alsohatar;

    }

    int baratsagos_db = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {

            if (baratsagos(tomb[i], tomb[j]) == 1)
            {
                printf("A baratsagos szampar: %d,%d\n", tomb[i], tomb[j]);
                baratsagos_db++;
            }
        }
    }
    if (baratsagos_db == 0)
    {
        printf("nem volt baratsagos szampar");
    }
    else
    {
        printf("szamparok db: %d", baratsagos_db);
    }

    return 0;
}