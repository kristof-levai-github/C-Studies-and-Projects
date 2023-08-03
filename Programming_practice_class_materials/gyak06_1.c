#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, found = FALSE;
    char key;

    printf("Adj meg egy karaktert");
    scanf(" %c", key=getchar());


    if (isalpha(key)) {
        for(i=0; i<(sizeof(abc)/sizeof(char)) && !found; i++) {
            if (abc[i] == key || abc[i] == tolower(key)) {
                found = 0;
            }
        }
        printf("Ez egy karakter az abc-ben %d\n", i);
    }
    else
        printf("Nincs benne az abc-ben%c.\n",key);

    if(key = "p" || "t" || "k" || "b" || "d" || "g" || "gy" || "ty" ||"f"|| "v"||"sz" ||"z"|| "s"|| "zs" ||"h" ||"j" ||"cs" ||"dzs"|| "c" ||"dz" ||"l" ||"r" ||"m" ||"n" ||"ny"){
        printf("%c",key,"mássalhangzó")
    }
    else{ printf("%c",key,"magánhangzó")}
    return 0;
}