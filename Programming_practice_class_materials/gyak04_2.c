#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower, upper, year = 0;
    int ok;
    char ch;
    int db = 0;


    do {
        ok = 1;						
        printf("Add meg az intervallum also hatarat: ");

        if ( (scanf("%d", &lower) != 1) || (lower < 1000) )  {
            printf("Hibas input\n");
            ok = 0;

            while ((ch=getchar())!='\n');		
        }
    } while (!ok);



    do { 					
        ok = 1;
        printf("Add meg az intervallum felso hatarat: ");

        if (scanf("%d", &upper) !=1 || upper < lower || upper > 2021) {
            printf("Hibas input\n");
            ok = 0;
            while ((ch=getchar())!='\n') ;		
        }
    } while (!ok);



    for(int year=lower;year<=upper;year++) {
        if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
            db++;
    }

    printf("A %d es a %d evek kozott %d darab szokoev van", lower, upper, db);




    return 0;
}
