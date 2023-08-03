#include <stdio.h>
#include <stdbool.h>

int main()
{
    int p = 1;
    int q;
    int r;
    bool ok;
    do
    {
        ok = false;
            q = p + 10;
            r = p + 20;
            if ((r * r) == (p * p) + (q * q))
            {
                printf("%i,%i,%i", p, q, r);
                ok = true;
            }
            else
            {
                p ++;
            }
            
        
        
    } while (!ok);
    
    return 0;
}
