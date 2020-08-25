#include <stdio.h>

float p(int n, int x)
{
    float r;
    if (n == 0)
        r = 1;
    else if (n == 1)
        r = x;
    else
        r = ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
    return r;
}

main()
{
    int n, x;
    float f;
    printf("input n,x:");
    scanf("%d,%d", &n, &x);
    f=p(n,x);
    printf("\nresult=%lf\n", p(n, x));
}