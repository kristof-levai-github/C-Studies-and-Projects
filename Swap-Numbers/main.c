#include <stdio.h>

int main()
{
    printf("Adja meg a két cserélendő számot: \n");
    double sz1;
    double sz2;
    scanf("%lf %lf", &sz1, &sz2);
    double temp;
    temp = sz1;
    sz1 = sz2;
    sz2 = temp;

    printf("%lf %lf\n", sz1, sz2);

    return 0;
}
