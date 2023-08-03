#include <stdio.h>
#include <math.h>

void beolvas(int *x, int *y);
int hatvanyoz(int n, int m);

int main()
{
    // fuggvenyek hivasa, eredmeny kiirasa
    int x;
    int y;
    beolvas(&x, &y);
    printf("%i", hatvanyoz(x, y));
}

void beolvas(int *x, int *y)
{
    // 2 db integer ertek ellenorzott beolvasasa

    int ok;
    do
    {
        ok = 1;
        if (scanf("%i", x) != 1 || *x < 0)
        {
            printf("Invalid input\n");
            ok = 0;
            while (getchar() != '\n')
            {
            }
        }
    } while (!ok);

    int ok2;
    do
    {
        ok2 = 1;
        if (scanf("%i", y) != 1 || *y < 0 || (*x==0 && *y==0))
        {
            printf("Invalid input\n");
            ok2 = 0;
            while (getchar() != '\n')
            {
            }
        }

    } while (!ok2);

    return;
}

int hatvanyoz(int n, int m)
{
    // hatvanyozas megvalositasa
    int temp = n;
    if (m == 0)
    {
        n = 1;
    }
    
    else
    {
        
    for (int i = 1; i < m; i++)
    {
        n = n * temp;
    }
    }

    return n;
}
