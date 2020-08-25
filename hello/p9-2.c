#include<stdio.h>

main()
{
    char a[10],b[10],c[10];
    char *p[3]={a,b,c},*t;
    printf("input No.1 string:");
    scanf("%s",a);
    printf("input No.2 string:");
    scanf("%s",b);
    printf("input No.3 string:");
    scanf("%s",c);
    printf("\n%s,%s,%s\n",a,b,c);

    printf("%s,%s,%s\n",p[0],p[1],p[2]); 
    if(strcmp(p[0] , p[1])>0)
    {
        t=p[0];
        p[0]=p[1];
        p[1]=t;
    }
    if(strcmp(p[0] , p[2])>0)
    {
        t=p[0];
        p[0]=p[2];
        p[2]=t;
    }
    if(strcmp(p[1] , p[2])>0)
    {
        t=p[1];
        p[1]=p[2];
        p[2]=t;
    }
    printf("%s,%s,%s\n",p[0],p[1],p[2]); 
}