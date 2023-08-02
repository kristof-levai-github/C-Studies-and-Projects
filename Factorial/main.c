#include <stdio.h>
#include <math.h>


int main()
{
    printf("Please give an N number: \n");
    int num1;
    scanf("%i", &num1);
    int facto = 1;
    for (int i = 1; i <= num1; i++)
    {
        facto = facto * i;
    }
    
    printf("The factorial result of N is: %i\n", facto);

    long num2 = num1;
    long facto2 = 1;
    for (int o = 1; o <= num2; o++)
    {
        facto2 = facto2 * o;
    }
    
    printf("The long factorial result of N is: %lld", facto2);
    return 0;
}
