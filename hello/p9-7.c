#include<stdio.h>

main()
{
    char s[20],c;
    char *r="lijun";
    int i=0;
    printf("input a string:");
    while(i<20)
    {
        scanf("%c",&c);
        if(c=='\n') break;
        s[i++]=c;
    }
    s[i]='\0';
    replace(s,r,3);
    printf("result str is:%s\n",s);
}

void replace(char *s, char *d, int b)
{
    int i=0;
    char * p;
    p=s+b-1;
    while( *(p+i) != '\0' && *(d+i) !='\0')
    { 
        *(p+i) = *(d+i);
        i++;
    }
    *(p+i)='\0';
}