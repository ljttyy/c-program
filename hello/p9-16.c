#include<stdio.h>

main()
{
    char *s="a123*456 17960?302ta5876,4,90lijun-20";
    int a[10];
    int i,n;
    n=find_int(s,a);
    printf("Find %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}

int find_int(char *s, int *a)
{
    int n,i,j,k;
    char c;
    i=n=k=j=0;
    
    while(*(s+i) != '\0')
    {
        c=*(s+i++);
        if(c>='0' && c<='9')
        {
            if(k==0) 
            {
                k=1;
                *(a+j)=c-48;
            }
            else
            {
                *(a+j) = *(a+j) *10 + c -48;
            }
            
        }
        else
        {
            if(k==1)
                j++;
            k=0;
        }
        
    }
    return j+1;
}