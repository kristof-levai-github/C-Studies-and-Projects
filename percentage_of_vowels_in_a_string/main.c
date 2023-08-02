#include <stdio.h>

#define SIZE 255

int main()
{
    char str[SIZE];
    printf("Give me a string: \n");
    scanf("%c", &str);
    int count = 0;
    int len = 0;

    char vowels[] = {'a', 'i', 'u', 'e', 'o'};
    int vowLen = sizeof(vowels) / sizeof(vowels[0]);

    for (int i = 0; i != '\0'; i++)
    {
        len++;
        for(int j = 0; j < vowLen; j++){
            printf("%d\n", i);
        }
    }
    printf("%lf", (double)len / count);

    return 0;
}
