#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a, b, i;
    long int eredmeny = 1;
    
    printf("\nKerem a hatvany alapot és a kitevot vesszovel elvalasztva: ");
    scanf("%d,%d", &a, &b);
    
    for(i=1; i<=b; i++) 
        eredmeny *= a;
    
    printf("\n%d %d. hatvanya: %ld\n", a, b, eredmeny);
  



    printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva: ");

    if (scanf("%d,%d", &a, &b) != 2) {
        printf("Hibas adatok!\n");
        return 1; 
    } else {
        for(i=1; i<=b; i++) 
            eredmeny *= a;
    }
    printf("\n%d %d. hatvanya: %ld\n", a, b, eredmeny);





    char c;
    int ok;
    do {
        ok = 1;
        printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva: ");
    
        if (scanf("%d,%d", &a, &b) != 2) {
            printf("Hibas adatok!\n");
           
            while ( (c = getchar()) != '\n'); 
                ok = 0;
        }
    } while (!ok);
    printf("\n%d %d. hatvanya: %ld\n", a, b, eredmeny);

 


    return 0;
}