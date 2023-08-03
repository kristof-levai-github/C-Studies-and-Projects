#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tovabb,ok;
    double a=0,b=0,res=0;
    char op,c;

    do {
        do {
            ok = 1;
            printf("\nKerem az elvegzendo muveletet 'a op b' (pl. 3 + 4) alakban!\n");

            if (scanf("%lf %c %lf", &a,&op,&b) != 3) {
                printf("Hibas adatok!\n");
                while ( (c = getchar()) != '\n');
                ok = 0;
            } else { // ha ok
                switch(op) {
                    case '+': res=a+b;break;
                    case '-': res=a-b;break;
                    case '*': res=a*b;break;
                    case '/':
                        if(b==0) {
                            printf("A 0-val valo osztas nem lehetseges!");
                            res=0;
                            ok = 0;
                        } else {
                            res=a/b;
                            break;
                        }
                }
            }

            printf("\nAz eredmeny: %lf",res);
        } while(!ok);

        printf("\nSzeretne folytatni? (i/n): ");
        scanf(" %c",&c);

        if(c == 'i' || c == 'I')
            tovabb = 1;
        else
            tovabb = 0;

    } while(tovabb);


    return 0;
}
