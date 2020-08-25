#include<stdio.h>
#include<math.h>

main()
{
    int a[101];
    int i,j,k;
    for(i=2;i<=100;i++)
        a[i] = i;
    for(i=2;i<=100;i++)
    {
        if(a[i]==0) continue;
        for(j=2;i*j<=100;j++) 
            a[i*j]=0;
    }
    for(i=2;i<=100;i++)
        if(a[i] != 0)
            printf("%d  ",a[i]);
}