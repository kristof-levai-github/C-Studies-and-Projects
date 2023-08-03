#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#define N 5

int main()
{
    int tomb[N];
    int also = 10, felso = 100;
    srand(time(0));

    for (int i = 0; i < N; i++)
    {
        tomb[i] = rand() % (felso - also + 1) + also;
        printf("\n%d ", tomb[i]);
    }

    int is_prime = 1;
    int prim_db = 0;

 
    for (int i = 0; i < N; i++)
    {
        is_prime = 1;
        for (int j = 2; j <= tomb[i] / 2; j++)
        {
            if (tomb[i] % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            prim_db++;
        }
    }
    printf("\nPrimszamok szama: %d", prim_db);

    int prim_tomb[prim_db];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        is_prime = 1;
        for (int j = 2; j <= tomb[i] / 2; j++)
        {
            if (tomb[i] % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            prim_tomb[k] = tomb[i];
            k++;
        }
    }

    if (prim_db > 0)
    {
        printf("\nPrimszamok: ");
        for (int i = 0; i < k; i++)
        {
            printf("%d ", prim_tomb[i]);
        }

        int min_index = 0;
        for (int i = 0; i < k; i++)
        {
            if (prim_tomb[i] < prim_tomb[min_index])
            {
                min_index = i;
            }
        }

        printf("\nA legkisebb primszam: %d", prim_tomb[min_index]);
    }
    else
    {
        printf("\nNincs primszam a tombben!");
    }

    printf("\n");
    int counter = 0;
    int minindex = 0;
    int divider = 0;
    bool found = false;
    int size = sizeof(tomb) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        found = false;
        divider = 2;

        while (divider < sqrt(tomb[i]) && !found)
        {
            if (tomb[i] % divider == 0)
                found = true;
            divider++;
        }

        if (!found)
        { 
            printf("\nPrimszam: %d", tomb[i]);
            counter++;

            if (counter == 1) 
                minindex = i;
            else if (tomb[i] < tomb[minindex])
                minindex = i;
        }
    }

    if (counter > 0)
        printf("\nA legkisebb primszam: %d", tomb[minindex]);
    else
        printf("\nNincs primszam a listaban\n");

   
    // negyzetszam keresese
    int db = 0;
    double gyok = 0;
    for (int i = 0; i < N; i++)
    {
        gyok = sqrt(tomb[i]);
        
        if (gyok == (int)gyok)
        {
            db++;
            printf("\nNegyzetszam: %d", tomb[i]);
        }
    }


    if (db == 0)
    {
        printf("\nNincs negyzetszam a tombben.");
    } else {
        printf("\nNegyzetszamok szama: %d", db);
    }

    return 0;
}