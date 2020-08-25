#include <stdio.h>
#include <math.h>

main()
{
    int fib_0 = 1, fib_1 = 1;
    for(int i = 1; i<=20; i++)
    {
        printf("%10d %10d", fib_0,fib_1);
        fib_0 = fib_0 + fib_1;
        fib_1 = fib_1 + fib_0;
    }
}