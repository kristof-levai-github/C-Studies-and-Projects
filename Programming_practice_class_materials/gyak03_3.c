#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N, i, sum=0;
    
    printf("\nKerek egy szamot: ");
    scanf("%d", &N);

    i=1;
    while (i<=N) {
        sum += i;
        i++;
    }

    printf("\nOsszeg: %d\n", sum);

    sum = 0;
    printf("\nKerek egy szamot: ");
    scanf("%d", &N);
    do {
        sum += N;
        N--;
    } while (N>0);
    printf("\nOsszeg: %d\n", sum);


    printf("\nKerek egy szamot: ");
    scanf("%d", &N);

    sum = 0;
    for (int i = 0; i <= N; i++)
    {
        sum += i;
    }
    
    printf("\nOsszeg: %d\n", sum);
    
    
    

    return 0;
}