#include<stdio.h>

void input(int *p, int n)
{
    int i;
    printf("input 10 nums:");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("echo:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}

void process(int *p, int n)
{
    int *min,*max,*tmp,i,t;
    max=min=p;
    for(i=1;i<n;i++)
    {
        if(*min > *(p+i))
            min=p+i;
        if(*max < *(p+i))
            max=p+i;
    }
    if(min != p)
    {
        t=*p;
        *p=*min;
        *min=t;
    }
    if(max != p+n-1)
    {
        t=*(p+n-1);
        *(p+n-1)=*max;
        *max=t;
    }
}

void output(int *p,int n)
{
    printf("\nprocess result is:");
    while(--n>=0)
        printf("%d ",*(p++));
}

main()
{
    int a[10],n=10;
    input(a,n);
    process(a,n);
    output(a,n);
}