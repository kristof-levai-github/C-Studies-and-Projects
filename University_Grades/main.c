#include <stdio.h>

int main()
{
    double jegyek[6];
    double atl;
    int osztdij;
    for (size_t i = 0; i < 6; i++)
    {
        printf("%i. vizsgajegyed: \n", i+1);
        scanf("%lf", &jegyek[i]);
        atl += jegyek[i];    
    }
    atl = atl / 6;
    if (atl <= 3.5)
    {
        osztdij = 0;
    }
    else if (atl >= 3.6 && atl <= 4.0)
    {
        osztdij = 5000;
    }
    else if (atl >= 4.1 && atl <= 4.5)
    {
        osztdij = 10000;
    }
    else
    {
        osztdij = 15000;
    }
    
    printf("Tanulmanyi atlag: %.2f\n", atl);
    printf("Havi osztondij: %ift\n", osztdij);
    return 0;
}
