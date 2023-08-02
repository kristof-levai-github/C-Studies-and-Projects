#include <stdio.h>

int main()
{
    printf("Adja meg melyik számot vizsgálja: \n");
    int szam;
    scanf("%i", &szam);

    if (szam % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}
