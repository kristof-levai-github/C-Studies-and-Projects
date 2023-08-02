#include <stdio.h>

int main()
{
    printf("Please give 2 numbers: \n");
    int sz1;
    int sz2;
    scanf("%i %i", &sz1, &sz2);
    if (sz1 > sz2)
    {
        printf("The bigger number is: %i\n", sz1);
    }
    else if (sz2 > sz1)
    {
        printf("The bigger number is: %i\n", sz2);
    }
    else{
        printf("The given numbers are equal.\n");
    }

    
    return 0;
}
