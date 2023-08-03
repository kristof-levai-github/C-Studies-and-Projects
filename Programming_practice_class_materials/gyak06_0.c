#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 6;
    int *p;
    p = &x;

    printf("x erteke: %d", x);
    printf("\np pointer altal hivatkozott cim: %d", p);
    printf("\np pointer altal hivatkozott ertek: %d", *p);

    // ket szam csereje pointer-el
    int a = 5, b = 10;
    int c;
    int *p2, *q2;
    printf("\nCsere elott a:%d b:%d", a, b);
    p2 = &a;
    q2 = &b;
    c = *p2;
    *p2 = *q2;
    *q2 = c;
    printf("\nCsere utan a:%d b:%d", a, b);

    // tombok es pointer kapcsolat
    int tomb[5] = {5,4,3,2,1};
    int *p3;    /* int-re mutato null pointer*/
    p3 = &tomb[0]; /* 'p3' a tomb elso elemere mutat*/
    printf("\nA tomb elso eleme: %d", *p3);

    return 0;
}