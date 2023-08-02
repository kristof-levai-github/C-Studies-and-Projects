#include <stdio.h>

int main()
{
    int num;
    printf("Please give me a num: \n");
    scanf("%i", &num);
    int rem = 0;
    for (int i = 2 ; i < num; i++)
    {
        if (num % i == 0)
        {
            rem ++;
        }
        
    }
    if (rem > 0)
    {
        printf("The entered number %i is not a Prime num!", num);
    }
    else{
        printf("The entered number %i is a Prime num!", num);
    }
    
    
    return 0;
}
