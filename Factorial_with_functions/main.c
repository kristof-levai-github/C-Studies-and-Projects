#include <stdio.h>

void int_beolvas(int* x);
int faktor(int x);


int main() {
    // main fuggveny definicioja
    int result;
    int x;
    int_beolvas(&x);
    result=faktor(x);
    printf("%i", result);

    return 0;
}
void int_beolvas(int* x) {
    int ok;
    do
    {
        ok = 1;
        if (scanf("%i",x) != 1 || *x<0 || *x>10)
        {
            ok = 0;
            printf("Invalid input\n");
            while (getchar() != '\n')
            {}
            
        }
        
    } while (!ok);
    


     return ;
}
int faktor(int x) {
    //faktorialis szamito fuggveny definicioja
    int result=1;
    for (int i = 1; i <= x; i++)
    {
        result*= i;
    }
    

    return result;
}
