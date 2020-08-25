#include<stdio.h>
#include<math.h>

main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j,s1=0,s2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                s1+=a[i][j];
            }
            if((i==0 && j==2) || (i==2 && j==0) || (i==j && i!=0 && i!=2) )
                s2+=a[i][j];
        }
    }
    printf("s1=%d,s2=%d\n",s1,s2);

}

