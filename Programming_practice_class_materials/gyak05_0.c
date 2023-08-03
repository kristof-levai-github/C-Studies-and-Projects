#include<stdio.h>
#include<stdlib.h>

#define MERET 5

int main() {

    int tomb[MERET];
    int tomb2 = {1,2,3,4,5,6};

    for (int i = 0; i < MERET; i++)
    {
       tomb[i] = 2*i;
    }


    for (int i = 0; i < MERET; i++)
    {
       printf("a %d. elem: %d\n", i+1, tomb[i]);
    }


    return 0;
}