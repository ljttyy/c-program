#include<stdio.h>

main()
{
    int a[3];
    int i;
    printf("input 3 nums:");
    scanf("%d,%d,%d",&a[0],&a[1],&a[2]);
    if(*a > *(a+1))
    {
        i=*a;
        *a=*(a+1);
        *(a+1)=i;
    }
    if(*a > *(a+2))
    {
        i=*a;
        *a=*(a+2);
        *(a+2)=i;
    }
    if(*(a+1) > *(a+2))
    {
        i=*(a+1);
        *(a+1)=*(a+2);
        *(a+2)=i;
    }
    printf("\n%d,%d,%d\n",a[0],a[1],a[2]);
}