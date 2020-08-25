#include<stdio.h>

main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("last num is:%d",a[process(a,10,4)]);
    
}

int process(int *p,int n, int m)
{
    int i=0,j=0,k=n;
    while(k>1)
    {
        if(i==n)
            i=0;
        if(*(p+i)!=0)
        {
            if(++j==m)
            {
                *(p+i)=0;
                k--;
                j=0;
            }
        }    
        i++;
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i) != 0)
            break;
    }
    return i;
}