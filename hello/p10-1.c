#include<stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int days(struct date * dat){
    char is_yn=0;
    int day_counts=0 ,i;

    is_yn= (dat->year%4==0 && dat->year%100 !=0) || dat->year%400==0 ? 1:0;
    printf("%dyear is_yn=%d\n",dat->year,is_yn);
    for(i=1;i<dat->month;i++){
        switch(i){
            case 1: day_counts+=30;break;
            case 2: day_counts += is_yn ? 29:28; break;
            case 3: day_counts+=31; break;
            case 4: day_counts+=30; break;
            case 5: day_counts+=31; break;
            case 6: day_counts+=30; break;
            case 7: day_counts+=31; break;
            case 8: day_counts+=31; break;
            case 9: day_counts+=30; break;
            case 10: day_counts+=31; break;
            case 11: day_counts+=30; break;
            case 12: day_counts+=31; break;
        }
    }
    day_counts+=dat->day;
    return day_counts;
}

main()
{
    struct date dat;
    printf("input year,month,day:");
    scanf("%d,%d,%d",&dat.year,&dat.month,&dat.day);
    printf("\n%d-%d-%d is the %d day.\n",dat.year,dat.month,dat.day,days(&dat));
}