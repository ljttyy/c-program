#include<stdio.h>

main()
{
    int a[5][5]={{7,4,9,2,0},{6,12,-3,8,4},{5,6,7,8,9},{11,12,13,14,15},{21,22,23,24,25}};
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%2d  ",a[i][j]);
        printf("\n");
    }
    handel(a,5);
    printf("\n\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%2d  ",a[i][j]);
        printf("\n");
    }
}

void handel(int (*p)[5],int n)
{
    int *m,*a,*b,*c,*d;
    int i,j,t;
    m=a=b=c=d=*p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            t=*(*(p+i)+j);
            if( t > *m)
                m=*(p+i)+j;
            if(t<*a)
            {
                d=c;
                c=b;
                b=a;
                a=*(p+i)+j;
            }
            else if(t<*b)
            {
                d=c;
                c=b;
                b=*(p+i)+j;
            }
            else if(t<*c)
            {
                d=c;
                c=*(p+i)+j;
            }
            else if(t<*d)
            {
                d=*(p+i)+j;
            }
        }
    }
    
    t=*m;
    *m=*(*(p+n/2)+2);
    *(*(p+n/2)+2) = t;

    t=*a;
    *a=**p;
    **p=t;

    t=*b;
    *b=*(*p+4);
    *(*p+4)=*b;

    t=*c;
    *c=*(*(p+n-1));
    *(*(p+n-1))=t;

    t=*d;
    *d=*(*(p+n-1)+4);
    *(*(p+n-1)+4)=t;
}