#include<stdio.h>

int max(int a, int b)
{
    return a>b?a:b;
}

int min(int a, int b)
{
    return a<b?a:b;
}

int sum(int a, int b)
{
    return a+b;
}

int process(int (*p)(),int a, int b)
{
    return (*p)(a,b);
}

main()
{
    int a,b;
    printf("input a,b:");
    scanf("%d,%d",&a,&b);

    printf("max(a,b)=%d\n",process(max,a,b));
    printf("min(a,b)=%d\n",process(min,a,b));
    printf("sum(a,b)=%d\n",process(sum,a,b));
}