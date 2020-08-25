#include<stdio.h>



double avg_s(double (*s)[5],int n)
{
    int i;
    double r=0;
    for(i=0;i<5;i++)
    {
        r=r+ *(*(s+n)+i);
    }
    r=r/5;
    return r;
}

double avg_p(double (*s)[5],int n)
{
    int i;
    double r=0;
    for(i=0;i<n;i++)
    {
        r=r+ *(*(s+i));
    }
    r=r/n;
    return r;
}

void f2(double (*s)[5],int n)
{
    int i,j,k=0,b=0;
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<5;j++)
        {
            if( *(*(s+i)+j) < 60)
                k++;
            if(k>=2)
            {
                printf("No.%d score<60 up 2:",i);
                for(b=0;b<5;b++)
                {
                    printf("%3.1f  ",*(*(s+i)+b));
                }
                printf("\tavg_score is %3.1f",avg_s(s,i));
                printf("\n");
                break;
            }
        }
    }
}

void f3(double (*s)[5],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        if (avg_s(s , i) > 90)
        {
            printf("No.%d avg score >90\t", i);
        }
        t=1;
        for(j=0;j<5;j++)
        {
            if(*(*(s+i)+j) <=85)
            {
                t=0;
                break;
            }
        }
        if(t==1)
        {
            printf("No.%d all score >85.\n",i);
        }
    }
}

main()
{
    double score[4][5]={{79,90,87,91,95},{58,64,70,49,72},{89,92,94,91,97},{86,90,87,88,89}};
    printf("Question 1:\n");
    printf("No.0 avg_score is:%3.1f\n",avg_p(score,4));
    printf("Question 2:\n");
    f2(score,4);
    printf("Question 3:\n");
    f3(score,4);
}