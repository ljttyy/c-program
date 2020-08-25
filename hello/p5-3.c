#include<stdio.h>
#include<math.h>

main()
{
    int d,m, s=0;
    scanf("%d,%d",&d,&m);
    for(int i=1; i<=m; i++)
    {
        for(int j=0; j<i; j++)
        {
            s += d*pow(10,j);
        }
    }
    printf("%d\n",s);
}