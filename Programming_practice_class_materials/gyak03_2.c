#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    printf("\nKerek egy szamot: ");
    scanf("%d", &a);

    if (a < 0)  {
        a = a * (-1);
    }

    printf("\nAbszolut erteke: %d\n", a);

    return 0;
}