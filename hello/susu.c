#include<stdio.h>
#include<math.h>

main()
{
    int m,i,k;
    scanf("%d",&m);
    k=sqrt(m);
    for(i=2; i<=k; i++)
        if(m%i == 0) break;
    if(i>=k+1) printf("%d is .",m);
    else printf("%d is not.\n",m);
    printf("%d",i);
}