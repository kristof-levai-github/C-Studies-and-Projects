#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int checkInputString(char *input)
{
    int result = strcmp(input, "magas");
    if (result == 0) {
        return 1;
    } else {
        result = strcmp(input, "alacsony");
        if (result == 0) {
            return 2;
        }
    }
    return 0;
}

int main()
{
    
    char input[10];

    do {
        printf("Magas vagy alacsony (magas/alacsony): ");
        scanf("%s", input);
    } while (checkInputString(input) == 0);

   

    return 0;
}
