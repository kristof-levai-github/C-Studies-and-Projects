#include <stdio.h>

int main()
{
    char ch;
    int ok;
    
    do
    {
        printf("Give me a character! \n");
        ok = 1;
        if (scanf("%c", &ch) != 1)
        {
            ok = 0;
            printf("Invalid input!\n");
            while (getchar() != '\n')
            {}
        }
        
        
                
    } while (!ok);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is in the alphabet\n", ch);
        int lowerc, higherc;

        lowerc = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        higherc = (ch == 'A' || ch == 'E' || ch == 'O' || ch == 'O' || ch == 'U');
    
        if (lowerc || higherc)
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }
    else{
        printf("%c is not in the alphabet.\n", ch);
    }

    

    
    return 0;
}
