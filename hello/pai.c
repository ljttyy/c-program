#include <stdio.h>
#include <math.h>
main()
{
    int s = 1;
    float n = 1,t = 1,pi = 0;
    while (fabs(t) >= 1e-6)
    {
        pi += t;
        n += 2 ;
        s = -s;
        t = s/n;
    }
    pi = pi * 4;
    printf("%10.6f",pi);
        

}