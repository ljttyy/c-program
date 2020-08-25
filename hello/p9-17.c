#include<stdio.h>

int ctrcmp(char *s, char *d)
{
    int r=0,i=0;
    while(*(s+i) != '\0' && *(d+i) != '\0')
    {
        if( ! (r=*(s+i)-*(d+i)) ) break;
        i++;
    }
    return r;
}

main()
{
    char *s="lijun",*d="liboyang";
    int r=strcmp(s,d);
    if (r==0)
        printf("%s = %s\n",s,d);
    else if(r>0)
        printf("%s > %s, %d\n",s,d,r);
    else 
        printf("%s < %s, %d\n",s,d,r);
}