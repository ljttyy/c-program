#include<stdio.h>

float *search(float (*p)[4])
{
    float *pt;
    pt=*(p+1);
    for(int i=0;i<4;i++)
    {
        if( *(*p+i) < 60)
            pt=*p;
    }
    return pt;
}

main()
{
    static float score[][4]={{60,70,80,90},{50,89,48,88},{34,78,90,66}};
    float *p;
    int i,j;
    for(i=0;i<3;i++)
    {
        p=search(score+i);
        if(p== *(score+i))
        {
            printf("No.%d:",i);
            for(j=0;j<4;j++)
            {
                printf("%f  ",*(p+j));
            }
            printf("\n");
        }
    }
}