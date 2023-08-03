#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 50

int keres(char keresett, char tomb[]);

int main()
{
    // karaktertomb deklaracioja, inicializalasa, beolvasas, fuggvenyhivas
    // eredmeny kiirasa
    char ABC[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char key;
    int ok;
    do
    {
        ok = 1;
        if (scanf("%c", &key) != 1){
            ok = 0;
            printf("Invalid input.\n");
            while (getchar() != '\n')
            {
                
            }
            
        }
    } while (!ok);

    printf("%i\n", keres(key, ABC));
    

 return 0;
}

int keres(char keresett, char tomb[]) {
    // linearis keresest vegrehajto fuggveny
    for (int i = 0; tomb[i] != '\0'; i++)
    {
        if (tomb[i] == keresett)
        {
            return i + 1;
        }
        
    }
    return 0;
}
