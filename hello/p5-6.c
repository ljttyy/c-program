#include<stdio.h>
#include<math.h>
main()
{
    int i,a,b,c;
    for(i=100; i<1000; i++)
    {
        c=i%10;
        b=(i-c)/10 % 10;
        a=(i-b-c)/100;
        if(pow(a,3)+pow(b,3)+pow(c,3)==i)
            printf("%d\n",i);
    }
}