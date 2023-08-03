#include <stdio.h>
#include <math.h>


void int_beolvas(int* x);
int prim_e(int num);
int ikerprim_e(int a, int b);
int count(int n);

int main() {
    // fuggvenyek hivasa, eredmeny kiirasa
    int x;
    int_beolvas(&x);
    printf("%i", count(x));

    return 0;
}

int prim_e(int num) {
    // egy szamrol annak megallapitasa, hogy primszam-e
    int db = 0;
    for (int i = 1; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            db += 1;
        }
        
    }
    if (db == 1)
    {
        return 1;
    }
    
    return 0;
}

int ikerprim_e(int a, int b) {
   // egy szamparrol annak megallapitasa, hogy ikerprimek-e
   if ((b - a) == 2 || (a - b) == -2)
   {
    return 1;
   }

   return 0;
   
}

void int_beolvas(int* x) {
    // 1 db integer ertek ellenorzott beolvasasa
    int ok;
    do
    {
        ok = 1;
        if (scanf("%i", x) != 1 || *x < 2)
        {
            printf("Invalid input.\n");
            ok = 0;
            while (getchar() != '\n')
            {
            }
            
        }
        
    } while (!ok);
    
}

int count(int n) {
    // az osszegzes elvegzese
    int db = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (prim_e(i) && prim_e(j))
            {
                db += ikerprim_e(i,j);   
            }
            
        }
        
        
    }
    return db;
}
