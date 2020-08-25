#include<stdio.h>
#include<math.h>

main()
{
    int a[10];
    int i,j,k;
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
