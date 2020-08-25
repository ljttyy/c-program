#include<stdio.h>

void main(int argc, char *argv[])
{
    char **p;
    p=argv;
    printf("arg num:%d\n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("arg No.%d is :%s\n",i,*p);
        p++;
    }
}