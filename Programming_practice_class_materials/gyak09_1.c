#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void beolvas(float *tomb, int meret);
void kiir(float *tomb, int meret);
void feltolt_random(float *tomb, int meret);
int szamlal(float *tomb, int meret, float limit);
int monoton_e(float *tomb, int meret);
float atlagol(float tomb[], int meret);
void eltereskiir(float tomb[], int meret, float atlag);
int minindex(float *tomb, int meret);
int maxindex(float *tomb, int meret);



int main()
{
    const int n = 12;
    float tomb[12];
    int db;
    float limit = 300.0;

    //beolvas(tomb, n);
    //kiir(tomb, n);

    feltolt_random(tomb, n);
    kiir(tomb, n);

    db = szamlal(tomb, n, limit);
    printf("\nAz arfolyam erteke %d-szer volt %.2f alatt.", db, limit);


    if(monoton_e(tomb, n))
        printf("\nAz Euro arfolyama monoton nott.");
    else
        printf("\nA szamsorozat nem monoton no.");


    float atlag = atlagol(tomb, n);
    printf("\nAtlag: %.2f\n", atlag);
    eltereskiir(tomb, n, atlag);


    int min = minindex(tomb, n);
    printf("\nLegkisebb elem: %.2f indexe: %d", tomb[min], min);

    int max = maxindex(tomb, n);
    printf("\nLegnagyabb elem: %.2f indexe: %d", tomb[max], max);

    return 0;

}


void beolvas(float *tomb, int meret) {
    int i, ok;
    char ch;

    for(i=0; i<meret; i++) {
        do {
            ok = 1;
            printf("%d. ertek: ", i+1);

            if (scanf("%f", &tomb[i]) != 1) {
                printf("Hibás input\n");
                ok = 0;
            }
            while ((ch=getchar()) != '\n');
        } while (!ok);
    }

    return;
}


void kiir(float *tomb, int meret) {
    int i;

    for(i=0; i<meret; i++) {
        printf("%d. ertek: %.2f \n", i+1, tomb[i]);
    }
    return;
}


void feltolt_random(float *tomb, int meret) {
    int i;

    srand(time(0));

    int upper = 280, lower = 311;
    double range = upper - lower;
    double div = RAND_MAX / range;
    double value;

    for (i=0; i<meret; i+=1) {
        //tomb[i] = (double)(rand()%(upper-lower+1)+lower); // pl.: 310.000000
        value = lower + (rand()/div); // pl.: 310.123456
        tomb[i] = round(value*100) / 100; // pl.: 310.120000
    }

    return;
}


int szamlal(float *tomb, int meret, float limit) {
    int i, db=0;

    for (i=0; i<meret; i++) {
        if (tomb[i] < limit)
            db++;
    }

    return db;
}


int monoton_e(float *tomb, int meret) {
    int i;

    for (i=1; i<meret; i++) {
        if (tomb[i-1] > tomb[i]) {
            return 0;
        }
    }

    return 1;
}



float atlagol(float tomb[], int meret) {
    float eredmeny, sum=0.0;
    int i;

    for(i=0; i<meret; i++)
        sum += tomb[i];

    eredmeny = sum/meret;

    return eredmeny;
}

void eltereskiir(float tomb[], int meret, float atlag) {
    int i;

    for (i=0; i<meret; i++)
        printf("%d. \t %.2f HUF/EUR \t %.2f\n", i+1, tomb[i], tomb[i]-atlag);
    printf("\n");

    return;
}


int minindex(float *tomb, int meret) {
    int i, mini = 0;

    for(i=0; i<meret; i++) {
        if(tomb[i] < tomb[mini]) {
            mini = i;
        }
    }

    return mini;
}

int maxindex(float *tomb, int meret) {
    int i, maxi = 0;

    for(i=0; i<meret; i++) {
        if(tomb[i] > tomb[maxi]) {
            maxi = i;
        }
    }

    return maxi;
}

