#include <stdio.h>

int main()
{
    printf("Adjon meg egy N mennyiségű számot: \n");
    int szamolo = 0;
    int nszam;
    scanf("%i", &nszam);
    int osszert = 0;
    do
    {
        szamolo += 1;
        osszert = osszert + szamolo;
        
    } while (szamolo != nszam);
    printf("%i\n", osszert);
    return 0;
}
