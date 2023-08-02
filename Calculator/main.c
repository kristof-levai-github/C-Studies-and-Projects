#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ok;
    double elso;
    double masodik;
    char muvelet;
    double eredmeny;
    int modelso;
    int modmasodik;

    do
    {
        ok = true;
        printf("Adjon meg egy műveletet: ");

        if (scanf("%lf %c %lf", &elso, &muvelet, &masodik) != 3)
        {
            ok = false;
            printf("Helytelen művelet!\n");
            while (getchar() != '\n')
            {
            }
        }

    } while (!ok);

    switch (muvelet)
    {
    case '+':
        eredmeny = elso + masodik;
        break;
    case '-':
        eredmeny = elso - masodik;
        break;
    case '*':
    case 'x':
        eredmeny = elso * masodik;
        break;
    case '/':
        if (masodik == 0)
        {
            printf("0-val való osztás nem értelmezendő!\n");
            return 1;
        }
        eredmeny = elso / masodik;
        break;

    case '%':
        if (masodik == 0)
        {
            printf("0-val való osztás nem értelmezendő!\n");
            return 2;
        }
            modelso = elso;
            modmasodik = masodik;
            eredmeny = modelso % modmasodik;
        break;

        default:
            printf("A művelet %c nem definiált!", muvelet);
            return 3;
        }
        printf("%lf %c %lf = %lf\n", elso, muvelet, masodik, eredmeny);
        return 0;
    }
