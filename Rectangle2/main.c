#include <stdio.h>

int main()
{
    printf("Adja meg a téglatest oldalait: \n");
    int aoldal;
    int boldal;
    int coldal;
    scanf("%i %i %i", &aoldal, &boldal, &coldal);
    int felszin;
    felszin = 2 * (aoldal * boldal + boldal * coldal + aoldal * coldal);
    int terfogat;
    terfogat = aoldal * boldal * coldal;
    printf("A téglatest felszíne: %i\n", felszin);
    printf("A téglatest térfogata: %i\n", terfogat);
    return 0;
}
