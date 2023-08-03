#include <stdio.h>

void int_beolvas(int* x);
int baratsagos(int a, int b);
int kisebboszto_osszeg(int szam);

int main()
{
    // fuggvenyek hivasa, szamparok kiiratasa (a, b) formatumban
    int a,b;
    int_beolvas(&a);
    int_beolvas(&b);
    if (a>b)
    {
        printf("Invalid input");
        return 0;
    }
    
    for (int i = a; i < b; i++)
    {
        for (int j = i+1; j < b; j++)
        {
            if (baratsagos(i,j))
            {
                printf("(%i, %i)",i,j);
            }
        }
    }
    
    return 0;
}

void int_beolvas(int* x) {
    // 1 db integer ertek ellenorzott beolvasasa
    int ok;
    do
    {
        ok=1;
        if(scanf("%i",x) != 1)
        {
            ok=0;
            printf("Invalid input");
            while(getchar() != '\n');
        }
    } while (!ok);
}

int baratsagos(int a, int b) {
    // egy szamparrol annak megallapitasa, hogy baratsagos-e
    int suma = kisebboszto_osszeg(a);
    int sumb = kisebboszto_osszeg(b);
    if (suma==b && sumb==a)
    {
        return 1;
    }
    return 0;
}

int kisebboszto_osszeg(int szam) {
    // egy szamnak a nala kisebb osztoi osszegenek kiszamitasa
    int sum=0;
    for (int i = 1; i < szam; i++)
    {
        if (szam%i==0)
        {
            sum = sum + i;
        }       
    }
    return sum;
}