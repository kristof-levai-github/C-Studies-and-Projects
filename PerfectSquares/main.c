#include <stdio.h>

int main()
{
    printf("Give me a num: \n");
    int num;
    scanf("%i", &num);

    int count = 1;
    int sqare = 0;

    while ((count * count) <= num )
    {
        ++ count;
        sqare ++;

    }
    
    printf("The number of squared nums is: %i", sqare);

    return 0;
}
