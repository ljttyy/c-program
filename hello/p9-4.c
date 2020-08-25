#include<stdio.h>

main()
{
    int a[10],n=10,i;
    printf("input 10 nums:");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    printf("\n");
    process(a,10,5);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}

void process(int *p,int n,int m)
{
    int q[n],t,i;
    t=n-m;
    for(i=0;i<t;i++)
        *(q+i) = *(p+i);
    for(i=0;i<m;i++)
        *(p+i) = *(p+t+i);
    for(i=0;i<t;i++)
        *(p+t+i) = *(q+i);
}