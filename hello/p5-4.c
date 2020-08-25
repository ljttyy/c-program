#include<stdio.h>
#include<math.h>

main()
{
    int d, s=0, t=1;
    int i,j;
    scanf("%d",&d);
    for(i=1; i<=d; i++)
    {
        t=1;
        for(j=1; j<=i; j++)
            {
                t*=j;
            }
        s+=t;
    }
    printf("%d阶乘求和:%d\n",d,s);
}