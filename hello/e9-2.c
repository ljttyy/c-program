#include<stdio.h>

main()
{
    int *p1,*p2,a,b;
    p1=&a;
    p2=&b;
    scanf("%d,%d",p1,p2);
    printf("\n%d,%d",a,b);
}