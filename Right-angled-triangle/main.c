#include <stdio.h>
#include <math.h>

int main()
{
    printf("Adja meg a derékszögű háromszög két ismert oldalát!\n");
    double a;
    double b;
    double cnegyzet;
    double c;
    scanf("%lf %lf", &a, &b);
    cnegyzet = (pow(a, 2) + pow(b, 2));
    c = sqrt(cnegyzet);
    printf("A derékszögű háromszög ismeretlen oldala %lf\n", c);
    return 0;
}
