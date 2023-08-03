#include <stdio.h>
#include <math.h>



int main()
{
    printf("Give me a num: \n");
    int num;
    scanf("%i", &num);
    int count = 1;
    long int numsum = 1;
    while (count <= num)
    {
        numsum = numsum * count;

        count ++;

    }
    
    double result;
    result = pow(numsum, (double) 1/num);
    printf("The geometric average is: %lf \n", result);

    // asd
    return 0;
}
