#include <stdio.h>
#include <string.h>

#define SIZE 50

char* megfordit(char szoveg[]);

int main()
{
    // szoveg bekerese, fuggvenyhivas, eredmeny kiirasa
    char str[SIZE];
    fgets(str, SIZE, stdin);
    megfordit(str);

    return 0;
}

char* megfordit(char szoveg[]) {
    // a parameterkent kapott szoveget megfordito fuggveny implementacioja
    int size = strlen(szoveg) - 1;

    int a = 0;
    int b = size;
    char temp;

    while (a <= b)
    {
        temp = szoveg[a];
        szoveg[a] = szoveg[b];
        szoveg[b] = temp;
        a += 1;
        b -= 1;
    }
    
    return szoveg;
}
