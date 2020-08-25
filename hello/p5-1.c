#include<stdio.h>
#include<math.h>

main()
{
    int m,n,i,j=0;
    int s=0,l=0;
    scanf("%d,%d",&m,&n);
    s = (m<n?m:n);
    l = (m>n?m:n);
    for(i=1; i<=s; i++)
        if(m%i == 0 && n%i ==0)
            j = i;
    printf("mix num is %d\n",j);

    for(i=1;;i++)
    {
        if(i*l%s == 0)
        {
            printf("max num is %d\n", i*l);
            break;
        }
    }
}