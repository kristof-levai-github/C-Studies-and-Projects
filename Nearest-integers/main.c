#include <stdio.h>
#include <math.h>


int main()
{
    printf("Adja meg melyik számnak szeretné a felfele, és lefele kerekítését: \n");
    double szam;
    double felso;
    double also;
    scanf("%lf", &szam);
    felso = ceil(szam);
    also = floor(szam);
    printf("Felfele kerekítve: %lf\n", felso);
    printf("Lefele kerekítve: %lf\n", also);

    return 0;
}
