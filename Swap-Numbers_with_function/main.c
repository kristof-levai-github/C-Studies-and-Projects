#include <stdio.h>

void cserel(int *x, int *y);

int main() {
    // 2 szam bekerese, fuggvenyhivas, eredmeny kiirasa
    int x;
    int y;
    int ok;
    do
    {
        ok = 1;
        printf("Give me two numbers:\n");
        if (scanf("%i,%i", &x, &y) != 2)
        {
            printf("Invalid input.\n");
            while (getchar() != '\n')
            {}
            
        }
                
    } while (!ok);

    cserel(&x, &y);

    printf(x, y);
    

    return 0;
}

void cserel(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
