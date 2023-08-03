#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define SIZE 10
#define MIN 15000
#define MAX 85000

/*Írjon C programot, amely megfelelő mértetű egydimenziós tömbben nyilvántartja egy számítógépes játékokat készítő cég egy éves nettó árbevételőt dollárban (egész érték) 10 éven keresztül. Az alábbi részfeladatokat külön függvényben valósítsa meg, betarta a command-query separation elvet, nem lehet benne globális változó és használja a top-down programozási elvet:
1.Töltse fel a tömböt 15000 és 85000 közé eső véletlen értékekkel
2.Írja ki a tömb elemeit
3.Számítsa ki 10 év bevételeinek összegét
4.Olvasson be ellenőrzött módon 1 és 10 közé eső intervallumot (alsó és felsőhatár)
5.Írja ki, hogy az adott időszakban az egyes évek árbevétele hány százaléka a 10 év összes árbevételének. A függvény bemeneti paraméterei: az időszak és a 10 év árbevétele


bónusz: írja ki a tömb elemeit rendezetten és fordítottan is, és keresse meg a legnagyobb évi bevételt!
*/


void fillArray(int arr[SIZE]);
void printArray(int arr[SIZE]);
void sortArray(int arr[SIZE]);
void sortArrayBackward(int arr[SIZE]);
void printArrayBackward(int arr[SIZE]);
int findMax(int arr[SIZE]);
int findMin(int arr[SIZE]);
int findSum(int arr[SIZE]);
void readNumbers(int* x, int* y);
void getPercentage(int arr[SIZE], int x, int y);
void readOneString(char pass[20]);
int countPass(int arr[SIZE], char pass[20]);

int main(){

    int arr[SIZE];
    char pass[20];

    printf("A tomb feltoltesre kerult, a feltoltott tomb:\n");
    fillArray(arr);
    sortArray(arr);
    printArray(arr);

    printf("\n\n");

    printf("A tomb forditva:\n");
    sortArrayBackward(arr);
    printArrayBackward(arr);

    printf("\n");
    int max = findMax(arr);
    printf("A legnagyobb bevetel: %d", max);

    printf("\n");
    int min = findMin(arr);
    printf("A legkisebb bevetel: %d", min);


    printf("\n");
    int sum = findSum(arr);
    printf("Az osszes bevetel: %d", sum);
    


    int x,y;
    readNumbers(&x, &y);
    printf("%d, %d", x,y);


    printf("\n");
    getPercentage(arr, x, y);

    printf("\n");
    readOneString(pass);
    countPass(arr, pass);
    return 0;
}

void fillArray(int arr[SIZE]){

    srand(time(NULL));
    for(int i=0; i<SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX-MIN+1);
    }
}

void sortArray(int arr[SIZE]){

    int i,j;
    int temp;

    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



void printArray(int arr[SIZE]){

    for(int i = 0; i<SIZE; i++)
    {
        printf("A tomb %d eleme: %d\n", i + 1, arr[i]);
    }
}


void sortArrayBackward(int arr[SIZE]){

    int i,j;
    int temp;

    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void printArrayBackward(int arr[SIZE]){

    for(int i = 0; i < SIZE; i++)
    {
        printf("A tomb %d eleme: %d \n", i+1, arr[i]);

    }
}


int findMax(int arr[SIZE]){

    int maxi = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int findMin(int arr[SIZE]){

    int mini;
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int findSum(int arr[SIZE]){

    int sum = 0;
    for(int i = 0; i<SIZE; i++)
    {
        sum += arr[i];
    }
    return sum;

}


void readNumbers(int* x, int* y){

    do{

        printf("adj meg ket szamot 15000 és 85000 kozott!\n");
       if(scanf("%d %d", x , y) !=2 || *x<15000 || *y>85000)
       {
        printf("invalid input!\n");
        while(getchar() != '\n');
        continue;
       } 
        break;

    }while(1);
}

void getPercentage(int arr[SIZE], int x, int y){

    int osszes = findSum(arr);
    int interval;

    for(int i = x-1; i < y; i++)
    {
        interval = arr[i];
    }
    
    double eredmeny = (osszes / interval) * 100;
    printf("Az adott idoszakban a bevetel: %lf", eredmeny);
}

void readOneString(char pass[20]) {
    do
    {
        printf("Kerlek add meg a vizsga sikeresseget (sikeres) vagy sikertelenseget (sikertelen): ");
        if (scanf("%s", pass) != 1) {
            printf("Hibas adatmegadas");
            while (getchar() != '\n');
            continue;
        }
        if (strcmp(pass, "sikeres") == 0 || strcmp(pass, "sikertelen") == 0) return;
    } while (1);
}

int countPass(int arr[SIZE], char pass[20]) {

    if (strcmp(pass, "sikeres") == 0) {
        printf("nagyonjo");
    } 

    else {
        printf("nagyonnemjo");
    }

}