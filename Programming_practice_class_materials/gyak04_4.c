#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam, i=2, db=0;

    printf("Kerek egy szamot: ");
    scanf("%d", &szam);

    /*for (i=2; i<=szam/2; i++)
			if (szam % i == 0) {
                db++;		//db=db+1;
			}
                if(db) {
                    printf("A megadott szam nem prim.");
                } else {
                    printf("A megadott szam prim.");
                }*/

    int talalt = 0;

   /* while (i<=szam/2 && !talalt) {
        if (szam % i) {
            i++;
            continue;
        } else
            talalt = 1;
    }

		if (talalt)
            printf("A megadott szam nem prim.");
		else
            printf("A megadott szam prim.");
    */


    for (i=2; i<=szam/2; i++) {
        if (szam % i)
            continue;
        else {
            talalt = 1;
            break;
        }
    }

    if (talalt)
        printf("A megadott szam nem prim.");
    else
        printf("A megadott szám prim.");




    return 0;
}
