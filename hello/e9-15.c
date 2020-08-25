#include<stdio.h>

main()
{
    void search(float (*p)[4], int n);
    static float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    search(score,3);
}

void search(float (*p)[4],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            if(  *(*(p+i)+j) < 60)
            {
                printf("NO%d:",i);
                for(k=0;k<4;k++)
                {
                    printf("%5.1f  ", *(*(p+i)+k) );
                }
                printf("\n");
                break;
            }
        }
    }
}