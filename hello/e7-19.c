#include<stdio.h>

int fac(int n)
{
    static int f=1;
    f=f*n;
    return f;
}

int fac2(int n)
{
    register int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

main()
{
    int i;
    for(i=1;i<=5;i++)
        printf("%d!=%d\n",i,fac(i));
    
    printf("\n");
    for(i=1;i<=5;i++)
        printf("%d!=%d\n",i,fac2(i));
}