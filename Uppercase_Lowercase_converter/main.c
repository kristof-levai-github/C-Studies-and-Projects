#include <stdio.h>
#include <ctype.h>

#define SIZE 50


char* kisbetusit(char *szoveg);
char* nagybetusit(char *szoveg);

int main()
{
    // szoveg bekerese, fuggvenyhivasok, eredmenyek kiirasa
    char str[SIZE];
    fgets(str, SIZE, stdin);
    kisbetusit(str);
    nagybetusit(str);


    return 0;
}

char* kisbetusit(char *szoveg) {
    // kisbetusito fuggveny implementacioja
    int a = 0;
    while (szoveg[a] != '\0')
    {
        szoveg[a] = tolower(szoveg[a]);
        a += 1;
    }
    return szoveg;
    
    
}

char* nagybetusit(char *szoveg) {
    // nagybetusito fuggveny implementacioja
     int b = 0;
    while (szoveg[b] != '\0')
    {
        szoveg[b] = toupper(szoveg[b]);
        b += 1;
    }
    return szoveg;
    
    
}
