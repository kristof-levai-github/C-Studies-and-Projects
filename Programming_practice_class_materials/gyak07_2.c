#include <stdio.h>
#include <stdlib.h>

void cserel(int *x, int *y);

int main()
{
    int a = 5, b = 10;

    printf("a = %d, b = %d\n", a, b);
    cserel(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void cserel(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}