#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


#define MIN 100
#define MAX 200
#define SIZE 10

void fillArray(int arr[SIZE]);
void sortArray(int arr[SIZE]);
void printArray(int arr[SIZE]);
void sortArrayBackwards(int arr[SIZE]);
void printArrayBackward(int arr[SIZE]);
int findSum(int arr[SIZE]);
int findMin(int arr[SIZE]);
int findMax(int arr[SIZE]);
void readOneString(char pass[20]);
int Calculate(int arr[SIZE], char pass[20]);
int readNumbers(int* x, int* y);

int main(){

    int arr[SIZE];

    fillArray(arr);
    printf("A tömb feltöltésre került!\n");

    printf("A tomb elemei:\n");
    sortArray(arr);
    printArray(arr);

    printf("a tomb elemei forditva:\n");
    sortArrayBackwards(arr);
    printArrayBackward(arr);

    printf("\n");
    int sum = findSum(arr);
    printf("A tomb elemeinek osszege: %d", sum);

    printf("\n");
    int maxi = findMax(arr);
    printf("A tomb legnagyobb eleme: %d", maxi);


    printf("\n");
    int mini = findMin(arr);
    printf("A tomb legkisebb eleme: %d", mini);


    char pass[20];
    printf("\n");
    readOneString(pass);
    int osszeg = Calculate(arr, pass);
    printf("A feltetelnek megfelel %d ember", osszeg);

    int x,y;
    readNumbers(&x, &y);
    printf("A ket szam: %d, %d", x, y);
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

    for(int i=0; i<SIZE-1; i++){
        for(int j=0; j<SIZE-1;j++){
            if(arr[j+1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void printArray(int arr[SIZE]){

    for(int i =0; i< SIZE; i++)
    {
        printf("A %d elem értéke: %d, \n", i+1, arr[i]);
    }
}


void sortArrayBackwards(int arr[SIZE]){

    int i,j;
    int temp;

    for(int i=0; i<SIZE-1; i++){
        for(int j=0; j<SIZE-1;j++){
            if(arr[j+1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArrayBackward(int arr[SIZE]){

    for(int i =0; i< SIZE; i++)
    {
        printf("A %d elem értéke: %d, \n", i+1, arr[i]);
    }
}


int findSum(int arr[SIZE]){

    int sum = 0;
    for(int i = 0; i< SIZE; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int findMin(int arr[SIZE]){

    int  min;
    for(int i =0; i<SIZE; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}   

int findMax(int arr[SIZE]){

    int  max = 0;
    for(int i =0; i<SIZE; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}  


void readOneString(char pass[20]){
    do{
        printf("add meg, hogy magas vagy alacsony: ");
        if(scanf("%s", pass) != 1)
        {
            printf("hibas megadas!");
            while(getchar() != '\n');
            continue;
        }
        if(strcmp(pass, "magas") == 0 || strcmp(pass, "alacsony") == 0)
            return;
    } while(1);
}

int Calculate(int arr[SIZE], char pass[20]){
    int count = 0;

    if(strcmp(pass, "magas") == 0)
    {
        for(int i = 0; i < SIZE; i++)
        {
            if(arr[i] > 175)
                count++;
        }
    }
    else if(strcmp(pass, "alacsony") == 0)
    {
        for(int i = 0; i < SIZE; i++)
        {
            if(arr[i] <= 175)
                count++;
        }
    }
    return count;
}

int readNumbers(int* x, int* y){

    do{
        printf("adj meg egy intervallumot!");
        if(scanf("%d, %d") != 2 || *x<MIN || *y > MAX)
        {
            printf("invalid input!");
            while(getchar() != '\n');
            continue;
        }
        break;
    }while(1);
}