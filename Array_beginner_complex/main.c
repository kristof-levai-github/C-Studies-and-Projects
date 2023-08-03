#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[20];
    bool ok;
    for (size_t i = 0; i < 20; i++)
    {
        do
        {
            printf("Give me a number between -1000 and 1000: \n");
            ok = true;
            if (scanf("%i", &arr[i]) != 1)
            {
                ok = false;
                printf("Invalid input! \n");
                while (getchar() != '\n')
                {
                }
            }
            if (arr[i] < -1000 || arr[i] > 1000)
            {
                ok = false;
                printf("Invalid input! \n");
                while (getchar() != '\n')
                {
                }
            }

        } while (!ok);
    }

    size_t size = sizeof(arr) / sizeof(arr[0]);
    int poz = 0;
    int neg = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            poz++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
    }

    int pozarr[poz];
    double pozatl = 0;
    int negarr[neg];
    double negatl = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            pozarr[i] = arr[i];
            pozatl += arr[i];
        }
        else if (arr[i] < 0)
        {
            negarr[i] = arr[i];
            negatl += arr[i];
        }
    }
    pozatl = pozatl / (sizeof(pozarr) / sizeof(pozarr[0]));
    negatl = negatl / (sizeof(negarr) / sizeof(negarr[0]));
    printf("A pozitiv tombok atlaga %.2f. A negativ tombok atlaga %.2f. \n", pozatl, negatl);

    printf("Adjon meg egy szamot: \n");
    int num;
    scanf("%i", &num);
    for (size_t i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            printf("A keresett ertek a tomb %i. eleme.\n", i+1);
            break;
        }
    }
    
    
    return 0;
}
