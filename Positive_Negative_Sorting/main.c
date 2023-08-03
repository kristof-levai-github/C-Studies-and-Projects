#include <stdio.h>
#define LIMIT 10

int main()
{
    int numbers[LIMIT], positives[LIMIT], negatives[LIMIT], count = 0;

    for (int i = 0; i < LIMIT; i++)
    {
        positives[i] = 0;
        negatives[i] = 0;
    }

    do
    {
        if (scanf("%d", &numbers[count]) != 1 || numbers[count] > 1000 || numbers[count] < -1000)
        {
            printf("Invalid input");
            while (getchar() != '\n');
            continue;
        }
        count++;
    } while (count != LIMIT);

    int positiveIndex = 0;
    int negativeIndex = 0;
    for (int i = 0; i < LIMIT; i++)
    {
        if (numbers[i] > 0)
        {
            positives[positiveIndex] = numbers[i];
            positiveIndex++;
            continue;
        }
        if (numbers[i] < 0)
        {
            negatives[negativeIndex] = numbers[i];
            negativeIndex++;
        }
    }

    int positiveSum = 0;
    int negativeSum = 0;
    for (int i = 0; i < positiveIndex; i++)
    {
        positiveSum += positives[i];
    }

    for (int i = 0; i < negativeIndex; i++)
    {
        negativeSum += negatives[i];
    }

    if (positiveIndex > 0)
    {
        printf("\nAverage of positive numbers: %f", (double)positiveSum / positiveIndex);
    }
    else
    {
        printf("\nNo positive numbers entered.");
    }

    if (negativeIndex > 0)
    {
        printf("\nAverage of negative numbers: %f", (double)negativeSum / negativeIndex);
    }
    else
    {
        printf("\nNo negative numbers entered.");
    }

    return 0;
}
