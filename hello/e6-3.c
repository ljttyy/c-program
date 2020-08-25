#include<stdio.h>
#include<math.h>

void main()
{
    int a[11];
    int i,j,t;
    printf("input 10 runmbers:\n");
    for(i=1;i<11;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("the sorted numbers is:\n");
    for(i=1;i<11;i++)
        printf("%d,",a[i]);
}