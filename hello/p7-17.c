#include<stdio.h>

void trans(int n, char s[])
{
    char r;
    static int i=0;
    
    if(n<10)
    {
        s[i++]=n+48;
        printf("%c",n=48);
    }
    else
    {
        trans(n/10,s);
    }
    s[i]='\n';    
}

main()
{
    int n;
    char s[20];
    printf("input a num:");
    scanf("%d",&n);
    trans(n,s);
    printf("\n%s",s);
}