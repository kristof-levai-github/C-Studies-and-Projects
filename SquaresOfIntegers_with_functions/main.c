#include <stdio.h>

void int_beolvas(int* x);
int negyzetre_emel(int n);

int main()
{
    // fuggvenyek hivasa, eredmeny kiirasa
    int x;
    int_beolvas(&x);
    x = negyzetre_emel(x);
    printf("%i", x);
}

void int_beolvas(int* x) {
    // 1 db integer ertek ellenorzott beolvasasa
    int ok;
    do
    {
        ok = 1;
        if (scanf("%i", x) != 1)
        {
            printf("Invalid input.\n");
            ok = 0;
            while (getchar() != '\n')
            {}
            
        }
        
    } while (!ok);
    
    return ;
}

int negyzetre_emel(int n) {
    // negyzetre emelo fuggveny implementacioja
    n = n*n;
    return n;
}


