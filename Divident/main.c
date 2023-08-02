#include <stdio.h>
#


int main()
{
    printf("Adja meg az osztandó számokat: \n");
    int sz1;
    int sz2;
    scanf("%i %i", &sz1, &sz2);
    double osztas;
    int maradekos;
    osztas = sz1 / sz2;
    maradekos = sz1 % sz2;
    printf("%i / %i = %lf maradék: %i\n", sz1, sz2, osztas, maradekos);
    return 0;
}
