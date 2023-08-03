#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tomb[] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    int db = 0;
    int meret = sizeof(tomb) / sizeof(double);
    for (int i = 0; i < meret; i++)
    {
        printf("\n A(z) %d. elem: %.2lf", i, tomb[i]);
    }
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < 300)
            db++;
    }

    printf("\n");
    printf("\n300 alatt: %d db volt.", db);


    int found = 0;
    /* Monotonitás vizsgálat */
    for (int i = 1; i < (meret && !found); i += 1)
    {
        if (tomb[i] < tomb[i - 1])
            found = 1; // talált a monotonitást elrontó elemet
    }
    printf("\nA sorozat monoton novekvo: %s", found ? "igaz" : "hamis");

   
   
    /* Minimum kiválasztás */
    int minindex = 0;
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] < tomb[minindex])
            minindex = i;
    }
    printf("\nA sorozat legkisebb eleme: %lf, sorszama: %d", tomb[minindex], minindex + 1);

    int maxindex = 0;
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] > tomb[maxindex])
            maxindex = i;
    }
    printf("\nA sorozat legnagyobb eleme: %lf, sorszama: %d", tomb[maxindex], maxindex + 1);
    
    
    // szoras
    double osszeg = 0;
    double atlag = 0;

    for (int i = 0; i < meret; i++) {
        osszeg += tomb[i];
    }
    atlag = osszeg / meret;
    printf("\nAz atlag: %.2lf",atlag);
    
    double szoras = 0;
    for (int i = 0; i < meret; i++)
    {
        szoras = fabs(atlag - tomb[i]);
        printf("\nA %d. szoras ertke: %.2lf", i, szoras); 
    }
    
    

    
    
    return 0;
}