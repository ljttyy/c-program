#include<stdio.h>
#include<math.h>

main()
{
    int i,j,s ;
    for(i=1; i<=1000; i++)
    {
        s=1;
        
        for(j=2; j<=i; j++)
        {
            if(i%j == 0) break;
        }
        s+=j;
        for(int f=j+1; f<= i/j; f++)
        {
            if(i%f == 0)
            {
                s+=f;
            }
        }
        if(i==s)
        {
            printf("%d its factors are 1,%d",i,j);
            for(int f=j+1, c=1; f<= i/j; f++)
            {
                if(i%f == 0) 
                {
                    c++;
                    if(c%10 == 0) printf("\n");
                    printf(",%d",f);
                }
            }
            printf("\n");
        }
        
    }
}