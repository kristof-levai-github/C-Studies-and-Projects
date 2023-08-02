#include <stdio.h>


int main()
{
    double aold;
    double bold;
    printf("Adja meg a téglalap két oldalát: ");
    scanf("%lf %lf", &aold, &bold);

    double terulet;
    double kerulet;

    terulet = aold * bold;
    kerulet = 2 * aold + 2* bold;
    printf("A téglalap területe: %.lf cm\n", terulet);
    printf("A téglalap kerülete: %.lf cm\n", kerulet);



    return 0;
}
