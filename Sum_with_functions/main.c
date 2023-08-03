#include <stdio.h>

void int_beolvas(int *x);
int szamjegyek_osszege(int n);

int main()
{
    // fuggvenyek hivasa, eredmenyek kiirasa
    int x;
    int_beolvas(&x);
    printf("%i", szamjegyek_osszege(x));
    return 0;
}

void int_beolvas(int *x)
{
    // 1 db integer ertek ellenorzott beolvasasa
    int ok;
    do
    {
        ok = 1;
        if (scanf("%i", x) != 1)
        {
            printf("Invalid input.\n");
            ok = 0;
            while (getchar() != '\n')
            {
            }
            
        }

    } while (!ok);

    return;
}


int szamjegyek_osszege(int n)
{
    // szamjegyek osszeget kiszamito algoritmus
    int count;
    int sum = 0;

    while (n > 0)
    {
        count = n%10;
        sum = sum + count;
        n = n / 10;
    }
    return sum;
}
