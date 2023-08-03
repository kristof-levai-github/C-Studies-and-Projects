#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Adj meg egy egesz szamot: ");
    //x=10;
    scanf("%d", &x);

    if (tokeletes(x))
        printf("\nA megadott szam tokeletes\n");
    else
        printf("\nA megadott szam nem tokeletes\n");



    return 0;
}

int tokeletes(int szam)
{
    if (szam == kisebboszto_osszeg(szam))
        return 1;

    return 0;
}

int kisebboszto_osszeg(int szam)
{
    int osszeg = 0, oszto;
   
    for (oszto = 1; oszto <= (szam / 2); oszto += 1)
    {
        if (szam % oszto == 0)
            osszeg += oszto;
    }

    return osszeg;
}