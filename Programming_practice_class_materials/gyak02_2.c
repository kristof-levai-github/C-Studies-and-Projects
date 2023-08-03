#include<stdio.h>
#include<stdlib.h>

int main() {
    int a=0,b=0;

    printf("Kerem az a-t: ");
    scanf("%d",&a);

    printf("Kerem a b-t: ");
    scanf("%d",&b);

    printf("Tegalap kerulete: %d", (2*a+2*b));
    printf("\nTegalap terulete: %d", (a*b));

    return 0;
}