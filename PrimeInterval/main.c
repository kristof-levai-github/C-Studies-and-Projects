#include <stdio.h>

int main()
{
    int beg, end;
    char colon;
    int ok;

    do
    {
        ok = 1;
        printf("Please give me the two numbers, separated by a colon: \n");
        if (scanf("%i,%i", &beg, &end) != 2)
        {
            ok = 0;
            printf("Invalid input!\n");
        }
        while (getchar() != '\n')
        {
        }

    } while (!ok);

    int prime = 0;
    for (int count = beg; count < end; count++)
    {
        int rem = 0;
        for (int i = 2; i < count; i++)
        {
            if (count % i == 0)
            {
                rem++;
            }
        }
        if (rem == 0)
        {
            prime++;
        }
    }

    printf("%i \n", prime);

    return 0;
}
