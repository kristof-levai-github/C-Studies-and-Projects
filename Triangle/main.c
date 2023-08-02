#include <stdio.h>
#include <math.h>



int main()
{
    printf("Adja meg a háromszög oldalait: \n");
    double aoldal;
    double boldal;
    double coldal;
    scanf("%lf %lf %lf", &aoldal, &boldal, &coldal);
    double kerulet;
    kerulet = aoldal + boldal + coldal;
    double s;
    s = kerulet / 2;
    double terulet;
    terulet = sqrt(s*(s - aoldal)*(s - boldal)*(s - coldal));
    printf("A háromszög kerülete: %lf\n", kerulet);
    printf("A háromszög területe: %lf\n", terulet);
    return 0;
}
