#include<stdio.h>

#define FORMAT "%d,%d\n"

main()
{
    static int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int i,j ;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%2d  (%10d)  ",a[i][j],&a[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("a,*a:\t"FORMAT,a,*a);
    printf("a[0],*(a+0):\t"FORMAT, a[0],*(a+0));
    printf("&a[0],&a[0][0]:\t"FORMAT,&a[0],&a[0][0]);
    printf("a[1],a+1:\t"FORMAT,a[1],a+1);
    printf("&a[1][0],*(a+1)+0:\t"FORMAT,&a[1][0],*(a+1)+0);
    printf("a[2],*(a+2):\t"FORMAT,a[2],*(a+2));
    printf("&a[2],a+2:\t"FORMAT,&a[2],a+2);
    printf("a[1][0],*(*（a+1)+0):\t"FORMAT,a[1][0],*(*(a+1)+0));
    printf("%d\n",**a);


    int (*p)[4];
    p=a;
    printf("p+2:%d\n",p+2);
    printf("*(p+2)+3: %d",*(p+2)+3);
    
}