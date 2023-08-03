#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a=0;

    printf("\nKerek egy egesz szamot: ");
    scanf("%d", &a);
    printf( (a % 2 == 0) ? " paros" : " paratlan" );



    printf("\nKerek egy egesz szamot: ");
    scanf("%d", &a);
    if (a%2==0)
        printf("paros");
    else
        printf("paratlan");


    printf("\nAdj meg egy szamot: ");
    scanf("%d", &a);
    
    switch(a%2) {
        case 0: printf("Paros.\n"); break;
        case 1: printf("Paratlan.\n"); break;
    }

    return 0;
}