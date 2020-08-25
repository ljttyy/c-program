#include <stdio.h>

main()
{
    char s[10][20];
    char *p[10];
    int i,j;
    char c;
    for(i=0;i<10;i++)
    {
        printf("\ninput NO.%d string(len<20):",i);
        j=0;
        while(j<20)
        {
            scanf("%c",&c);
            if(c=='\n')
                break;
            *(*(s+i)+j)=c;
            j++;
        }
        *(*(s+i)+j)='\0';
    }    
    for(i=0;i<10;i++)
    {
        p[i]=s+i;
        printf("%d:%s\n",i,*(p+i));
    }
    str_sort(p,10);
    printf("\nafter sort:\n");
    for(i=0;i<10;i++)
        printf("%d:%s\n",i,*(p+i));
}

void str_sort(char *p[20],int n)
{
    char *t;
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(*(p+k),*(p+j)) >0)
                k=j;
        }
        if(k!=i)
        {
            t=*(p+k);
            *(p+k)=*(p+i);
            *(p+i)=t;
        }
    }
}