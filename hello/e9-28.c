#include <stdio.h>

main()
{
    char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
    sort(name,5);
    print(name,5);

    char **p;
    p=name+2;
    printf("\n%o",*p);
    printf("\n%s\n\n",*p);

    int a[5]={1,3,5,7,9};
    int *b[]={&a[0],&a[1],&a[2],&a[3],&a[4]};
    int **p2;
    p2=b;
    for(int i=0;i<5;i++)
        printf("%d\n",**p2++);

}

void sort(char *name[],int n)
{
    char *t;
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[k],name[j])>0)
                k=j;
        }
        if(k!=i)
        {
            t=name[i];
            name[i]=name[k];
            name[k]=t;
        }
    }
}

void print(char *name[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s  ",name[i]);
}