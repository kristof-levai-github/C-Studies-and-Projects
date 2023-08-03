#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50

int palindroma_e(char str[]);

int main() {
     // szoveg bekerese, fuggvenyhivas, eredmeny kiirasa
     char str[SIZE];
     scanf("%[^\n]", str);
     printf("%i", palindroma_e(str));

     return 0;
}
int palindroma_e(char str[]) {
    // annak megallapitasa, hogy a parameterkent kapott szoveg palindrom-e
    int strsize = strlen(str);
    for (int i = 0; i < strsize; i++)
    {
        str[i] = tolower(str[i]);
    }
    int a = 0;
    int b = strsize-1;
    while (a <= b)
    {
        if (str[a] == ' ')
        {
            a += 1;
        }
        if (str[b] == ' ')
        {
            b -= 1;
        }
        if (str[b] != str[a])
        {
            return 0;
        }
        a += 1;
        b -= 1;
    }
    return 1;

}
