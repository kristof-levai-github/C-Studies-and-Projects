#include <stdio.h>

int main()
{
    int ok;
    int date1;
    int date2;
    char comma;

    do
    {
        printf("Please give me two dates: \n");
        ok = 1;
        if (scanf("%i %c %i", &date1, &comma, &date2) != 3)
        {
            
            printf("Invalid input!\n");
            ok = 0;
        }
        if (comma != ',')
            {
                printf("Invalid input!\n");
                ok = 0; 
            }
        while (getchar() != '\n')
        {
        }

    } while (!ok);

    int leap = 0;

    for (date1; date1 <= date2; date1++)
    {

        if (date1 % 4 == 0)
        {
            leap++;
        }
    }
    printf("The number of leap years is: %i", leap);
    return 0;
}
