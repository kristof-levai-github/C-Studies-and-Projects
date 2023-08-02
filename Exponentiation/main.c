#include <stdio.h>

int main()
{
    int ok;
    long num1;
    long num2;
    char op;
    do
    {
        ok = 1;
        printf("Please give 2 numbers which you want the pow. value of: \n");
        if (scanf("%i %c %i", &num1, &op, &num2) != 3)
        {

            printf("Invald input!\n");
            ok = 0;
        }
        while (getchar() != '\n')
        {}
        
    } while (!ok);

    long res = 1;

    for (int i = 1; i <= num2; i++)
    {

        res = res * num1;
    }
    

    printf("The result is: %lld", res);

    

    

    return 0;
}
