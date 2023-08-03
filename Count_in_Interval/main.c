#include <stdio.h>

int main()
{
    int ok;
    int num1, num2;

    do
    {
        ok = 1;
        printf("Give me two intervals of nums: \n");
        if (scanf("%i,%i", &num1, &num2) != 2)
        {
            ok = 0;
            printf("Invalid input!\n");
        }
        while (getchar() != '\n')
        {
        }

    } while (!ok);
    int diff = num2 - num1;
    int arr[diff] = {};

    for (int i = num1; i <= num2; i++)
    {
        arr[i] = num1;
        num1++;
    }
    
    printf("%i", arr);

    return 0;
}
