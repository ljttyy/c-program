#include<stdio.h>
#include<math.h>

main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int i,j,k;
    for(i=0,j=8;i<j;i++,j--)
    {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
    }
    for(i=0;i<9;i++) printf("%d ",a[i]);
}


