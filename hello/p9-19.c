#include<stdio.h>
#define MAX_SIZE 100
static char d[MAX_SIZE];
static char *s = d;
static int m=0;
char * alloc(int n)
{


    if(m+n>=MAX_SIZE)
    {
        return NULL;
    }
    s=s+n;
    m=m+n;
    return s;
}

void free(char * p)
{
    for(int i=0;i< MAX_SIZE-(p-d);i++)
    {
        *(p+i)='\0';
    }
    s=p;
    m=MAX_SIZE-(p-d);
}

main()
{
    char * p;
    int i;
    p=alloc(50);
    if(p==NULL)
        printf("alloc p(50) faild.");
    else 
        printf("alloc p(50) ok.");
    for(i=0;i<50;i++)
    {
        *(p+i)='a';
    }
    char * q;
    q=alloc(50);
    if(q==NULL)
        printf("alloc q(50) fail.");
    free(p);
    q=alloc(70);
    if(q==NULL)
        printf("alloc q(70) ok.");
    else printf("alloc q(70) faild.");
}