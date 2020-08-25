#include<stdio.h>

main()
{
    char s[20];
    int i=0;
    char c;
    printf("input a string <20:\n");
    while(i<20)
    {
        scanf("%c",&c);
        if(c== '\n')
            break;
        s[i++]=c;
    }
    s[i]='\0';

    printf("length of string is: %d",length(s));
}

int length(char *p)
{
    int i=0;
    while(*(p+i++)!='\0');
    return i-1;
}