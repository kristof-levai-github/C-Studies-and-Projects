#include <stdio.h>
#include <math.h>
#define pi M_PI

int main()
{
    
    printf("Adja meg a kör sugarát: ");
    double sugar;
    scanf("%lf", &sugar);
    double kerulet;
    kerulet = (2 * sugar) * pi;
    double terulet;
    terulet = pow(sugar, 2) * pi;

    printf("A kör kerülete: %lf cm\n", kerulet);
    printf("A kör területe: %lf cm\n", terulet);

    


    return 0;
}
