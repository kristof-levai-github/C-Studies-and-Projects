#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
int r;
double k, t; 


printf("\nAdja meg a kor sugarat: ");

scanf("%d", &r); 
t = r*r*PI;
k = 2*PI*r;


printf("\nA kor terulete: %f", t);
printf("\nA kor kerulete: %f", k);


printf("\n %lf", pow(2,3));

return 0;
}