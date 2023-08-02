#include <stdio.h>
#include <math.h>

int main()
{
    printf("Adjon meg egy számot, aminek az abszolútértékét akarja: \n");
    double szam;
    scanf("%lf", &szam);
    double abszolut;
    abszolut = fabs(szam);
    printf("A szám abszolútértéke %lf", abszolut);
    return 0;
}
