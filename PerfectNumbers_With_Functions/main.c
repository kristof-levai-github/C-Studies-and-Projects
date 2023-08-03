#include <stdio.h>

int tokeletes(int szam);
int kisebboszto_osszeg(int szam);
int count(int x);
void int_beolvas(int* x);

int main()
{
    // fuggvenyek hivasa, eredmeny kiirasa
    int x;
    int_beolvas(&x);
    printf("%i", count(x));    

    return 0;
}

int tokeletes(int szam) {
    // egy szamrol annak megallapitasa, hogy tokeletes-e
   if (kisebboszto_osszeg(szam) == szam)
   {
    return 1;
   }
   return 0;
}

int kisebboszto_osszeg(int szam) {
     // egy szamnak a nala kisebb osztoi osszegenek kiszamitasa
    int osszeg = 0;
    for (int i = 1; i < szam; i++)
    {
        if (szam % i == 0)
        {
            osszeg += i;
        }
        
    }
    return osszeg;
}

int count(int x) {
    // az osszegzes elvegzese
    int db = 0;
    for (int i = 1; i < x; i++)
    {
        db += tokeletes(i);
    }
    
    return db;

}

void int_beolvas(int* x) {
    // 1 db integer ertek ellenorzott beolvasasa
    int ok;
    do
    {
        ok = 1;
        if (scanf("%i", x) != 1 || *x < 1)
        {
            printf("Invalid input.\n");
            ok = 0;
            while (getchar() != '\n')
            {}
            
        }
        
    } while (!ok);
    
}

