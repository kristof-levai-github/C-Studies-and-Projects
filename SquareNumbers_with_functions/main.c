#include <stdio.h>
#include <math.h>

void int_beolvas(int* x);
int negyzetszam_e(int szam);
int count(int x);

int main() {
    // fuggvenyek hivasa, eredmeny kiirasa
    int x;
    int_beolvas(&x);
    printf("%i", count(x));
    return 0;
}

int negyzetszam_e(int szam) {
    // egy szamrol annak megallapitasa, hogy negyzetszam-e
    for (int i = 0; i <= szam; i++)
    {
        if ((i * i) == szam)
        {
            return 1;
        }
        
    }
    return 0;

}

int count(int x) {
    // az osszegzes elvegzese
    int db = 0;
    for (int i = 0; i <= x; i++)
    {
        if (negyzetszam_e(i))
        {
            db += 1;    
        }
        
    }
    return db;
}

void int_beolvas(int* x) {
    // 1 db integer ertek ellenorzott beolvasasa
    int ok;
    do
    {
        ok = 1;
        if (scanf("%i", x) != 1 || *x < 0)
        {
            printf("Invalid input.\n");
            ok = 0;
            while (getchar() != '\n')
            {}
            
        }
        
    } while (!ok);
    
}
